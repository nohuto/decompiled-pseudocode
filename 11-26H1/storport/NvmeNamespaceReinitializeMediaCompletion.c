/*
 * XREFs of NvmeNamespaceReinitializeMediaCompletion @ 0x14010C300
 * Callers:
 *     <none>
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 */

__int64 __fastcall NvmeNamespaceReinitializeMediaCompletion(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v5; // rdi
  __int64 v6; // r8
  unsigned int v7; // edx
  unsigned int v8; // edx
  __int16 v9; // ax
  __int64 result; // rax

  v3 = *a2;
  v5 = *(_QWORD *)(*a2 + 4216);
  if ( a3 )
  {
    *(_WORD *)(v3 + 4260) = *(_WORD *)(a3 + 14);
  }
  else
  {
    *(_WORD *)(v3 + 4260) = 0;
    *(_WORD *)(*a2 + 4260) &= 0xF1FFu;
    *(_WORD *)(*a2 + 4260) = *(_WORD *)(*a2 + 4260) & 0xFE01 | 0xC;
  }
  v6 = *a2;
  v7 = *(unsigned __int16 *)(*a2 + 4260);
  if ( ((*(unsigned __int16 *)(*a2 + 4260) >> 9) & 7) != 0 || (v8 = v7 >> 1, (unsigned __int8)v8 > 6u) || (_BYTE)v8 )
  {
    v9 = *(_WORD *)(v6 + 4260);
    if ( (unsigned __int8)*(_DWORD *)(v6 + 4096) == 0x80 )
    {
      StorEtwNvmeControllerEvent(
        a1,
        1,
        2LL,
        (__int64)L"Failed to format the nvme device.",
        L"NVMeStatus",
        v9,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0);
    }
    else
    {
      StorEtwNvmeControllerEvent(
        a1,
        1,
        2LL,
        (__int64)L"Failed to sanitize the nvme device.",
        L"NVMeStatus",
        v9,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0);
      if ( (*(_WORD *)(*a2 + 4260) & 0x1FE) == 0x38 )
        *(_BYTE *)(v5 + 642) = 1;
    }
  }
  result = *a2;
  _interlockedbittestandreset((volatile signed __int32 *)(*a2 + 4256), 3u);
  return result;
}
