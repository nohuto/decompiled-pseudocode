/*
 * XREFs of sub_1401375E4 @ 0x1401375E4
 * Callers:
 *     sub_1401366F0 @ 0x1401366F0 (sub_1401366F0.c)
 *     sub_140137980 @ 0x140137980 (sub_140137980.c)
 * Callees:
 *     sub_140067F28 @ 0x140067F28 (sub_140067F28.c)
 *     sub_14013AC08 @ 0x14013AC08 (sub_14013AC08.c)
 */

__int64 __fastcall sub_1401375E4(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 *v3; // rdi
  unsigned int v4; // esi
  __int64 v7; // rbx
  int v8; // ecx
  const void *v9; // rax
  SIZE_T v10; // r8
  const void *v11; // r9

  v3 = *(__int64 **)(a2 + 16);
  v4 = 0;
  *a3 = 0LL;
  while ( !*a3 && v3 )
  {
    if ( v3[1] != 0x200000006LL || (v7 = v3[2]) == 0 )
    {
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
        sub_140067F28(
          (__int64)off_140168120->AttachedDevice,
          0x11u,
          (__int64)&unk_140154F38,
          *((_DWORD *)v3 + 2),
          *((_DWORD *)v3 + 3));
      return (unsigned int)-1073741435;
    }
    v8 = *(_DWORD *)(a1 + 12);
    if ( (unsigned int)(v8 - 7) <= 7
      && *(_DWORD *)(a1 + 8) <= 8u
      && (unsigned int)(*(_DWORD *)(v7 + 8) - 7) <= 7
      && *(_DWORD *)(v7 + 12) <= 8u
      && *(_QWORD *)a1 == *(_QWORD *)(v7 + 16)
      || (unsigned int)(v8 - 15) <= 2
      && (unsigned int)(*(_DWORD *)(v7 + 8) - 15) <= 2
      && *(_DWORD *)(a1 + 8) == *(_DWORD *)(v7 + 12)
      && (v9 = (const void *)sub_14013AC08(v3[2], a2, *(unsigned int *)(v7 + 12)),
          RtlCompareMemory(v11, v9, v10) == *(_DWORD *)(v7 + 12)) )
    {
      *a3 = v7;
    }
    v3 = (__int64 *)*v3;
  }
  return v4;
}
