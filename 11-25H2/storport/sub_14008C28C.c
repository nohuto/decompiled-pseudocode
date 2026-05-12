/*
 * XREFs of sub_14008C28C @ 0x14008C28C
 * Callers:
 *     sub_140088088 @ 0x140088088 (sub_140088088.c)
 *     sub_140088168 @ 0x140088168 (sub_140088168.c)
 *     sub_14008BEA0 @ 0x14008BEA0 (sub_14008BEA0.c)
 *     sub_14008BF58 @ 0x14008BF58 (sub_14008BF58.c)
 *     sub_14008C020 @ 0x14008C020 (sub_14008C020.c)
 *     sub_14008C0D8 @ 0x14008C0D8 (sub_14008C0D8.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14003BD50 @ 0x14003BD50 (sub_14003BD50.c)
 *     sub_1400564C8 @ 0x1400564C8 (sub_1400564C8.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_14008C28C(PDEVICE_OBJECT DeviceObject, int a2, int a3, union _LARGE_INTEGER *a4, ULONG *a5)
{
  ULONG *v5; // rsi
  __int64 v10; // rax
  void *v11; // rbx
  __int64 v13; // rax
  int v14; // edi
  __int64 v15; // [rsp+30h] [rbp-38h] BYREF

  v5 = a5;
  LODWORD(v15) = 0;
  memset_0(a4, 0, *a5);
  v10 = sub_1400143E0(64LL, 64LL, 1128358226LL, (__int64)DeviceObject);
  v11 = (void *)v10;
  if ( !v10 )
    return 3221225626LL;
  *(_DWORD *)v10 = 1130980673;
  *(_DWORD *)(v10 + 12) = 4;
  *(_DWORD *)(v10 + 4) = 1297302623;
  *(_DWORD *)(v10 + 8) = 64;
  *(_DWORD *)(v10 + 16) = 1048578;
  LODWORD(a5) = a3;
  *(_OWORD *)(v10 + 20) = xmmword_14014D860;
  *(_DWORD *)(v10 + 36) = 0x40000;
  *(_DWORD *)(v10 + 40) = 1;
  *(_DWORD *)(v10 + 44) = 0x40000;
  *(_DWORD *)(v10 + 48) = a2;
  v13 = v10 + 52;
  *(_WORD *)v13 = 4;
  if ( a2 == 3 )
  {
    *(_WORD *)(v13 + 2) = 8;
    *(_DWORD *)(v13 + 4) = 262146;
    sub_1400564C8((void *)(v13 + 8), 4uLL, &a5, 4uLL);
  }
  else
  {
    *(_WORD *)(v13 + 2) = 0;
  }
  v14 = sub_14003BD50(DeviceObject, v11, 0x40u, a4, *v5, &v15);
  if ( v14 >= 0 )
    *v5 = v15;
  ExFreePoolWithTag(v11, 0x43416152u);
  return (unsigned int)v14;
}
