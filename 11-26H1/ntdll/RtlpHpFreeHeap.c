/*
 * XREFs of RtlpHpFreeHeap @ 0x180004CE0
 * Callers:
 *     RtlFreeHeapFast @ 0x18013FFE0 (RtlFreeHeapFast.c)
 *     RtlFreeHeapFull @ 0x1801400A0 (RtlFreeHeapFull.c)
 * Callees:
 *     RtlpHpLfhContextFree @ 0x180004E80 (RtlpHpLfhContextFree.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180005150 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpSegFreeInternal @ 0x180005E18 (RtlpHpSegFreeInternal.c)
 *     RtlpHpLargeFree @ 0x18008058C (RtlpHpLargeFree.c)
 *     RtlpHpFreeHeapSlow @ 0x180080730 (RtlpHpFreeHeapSlow.c)
 *     RtlpHpEnvAcquireGlobalLockSharedContended @ 0x180121080 (RtlpHpEnvAcquireGlobalLockSharedContended.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpFreeHeap(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v4; // rcx
  unsigned int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // r9
  char v11; // cl
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r10
  __int64 v14; // rdx
  unsigned int v15; // ecx
  __int64 result; // rax

  v4 = (_DWORD *)(a1 + 20);
  __writegsqword(0x250u, (unsigned __int64)v4);
  v6 = *v4 & 0x20F0;
  if ( v6 )
  {
    if ( (v6 & 0x10) != 0 && *(_DWORD *)(a1 + 224) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
      RtlpHpEnvAcquireGlobalLockSharedContended(v4, v6, a3);
    v15 = RtlpHpFreeHeapSlow(a1, a2, v6);
  }
  else
  {
    if ( (_WORD)a2 )
    {
      v7 = a1 + 320;
    }
    else
    {
      v8 = RtlCSparseBitmapBitmaskRead(&BaseAddress, 2 * ((unsigned __int64)(a2 - qword_1801C6908) >> 20));
      v9 = v8;
      if ( !v8 || (_DWORD)v8 == 3 )
      {
        v15 = RtlpHpLargeFree(a1, a2) != 0;
        goto LABEL_11;
      }
      v7 = a1 + 320;
      if ( v9 == 2 )
        v7 = a1 + 512;
    }
    v10 = *(_QWORD *)v7 & a2;
    if ( (RtlpHpHeapGlobals ^ *(_QWORD *)(v10 + 0x10) ^ v10) == v7 )
    {
      v11 = *(_BYTE *)(v7 + 8);
      v12 = v10 + 32 * ((unsigned __int64)(unsigned int)(a2 - v10) >> v11);
      v13 = v12 - 32LL * *(unsigned __int8 *)(v12 + 26);
      v14 = v10 + ((unsigned int)((__int64)(v13 - v10) >> 5) << v11);
      if ( *(_BYTE *)(v13 + 24) + (v14 == a2) == 11 )
        v15 = RtlpHpLfhContextFree(*(_QWORD *)(v7 + 24), v14, a2);
      else
        v15 = RtlpHpSegFreeInternal(v7, a2, v13, 0LL);
    }
    else
    {
      RtlpLogHeapFailure(9, *(_QWORD *)(v7 + 56), a2, 0, 0LL, 0LL);
      v15 = 0;
    }
  }
LABEL_11:
  result = v15;
  __writegsqword(0x250u, 0LL);
  return result;
}
