/*
 * XREFs of KeSetExecuteOptions @ 0x140202B0C
 * Callers:
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     KiReleaseProcessLockExclusive @ 0x140203410 (KiReleaseProcessLockExclusive.c)
 *     KiAcquireProcessLockExclusive @ 0x140203770 (KiAcquireProcessLockExclusive.c)
 */

__int64 __fastcall KeSetExecuteOptions(__int64 a1, int a2)
{
  char v2; // di
  unsigned int v5; // esi
  __int64 v6; // rdx
  char v7; // al
  unsigned __int8 v8; // al
  unsigned __int8 v9; // dl
  unsigned __int8 v10; // cl
  unsigned __int8 v11; // r8
  unsigned __int8 v12; // cl
  unsigned __int8 v13; // r8
  unsigned __int8 v14; // cl
  unsigned __int8 v15; // r8
  unsigned __int8 v16; // cl
  char v17; // cl
  char v18; // r8
  bool v19; // zf
  char v20; // cl
  char v21; // [rsp+38h] [rbp+10h] BYREF

  v21 = 0;
  v2 = a2;
  if ( (a2 & 0xFFFFFF80) != 0 || !*(_QWORD *)(a1 + 784) || *(_WORD *)(a1 + 1772) != 332 )
    return 3221225485LL;
  v5 = -1073741790;
  KiAcquireProcessLockExclusive(a1, &v21);
  v7 = *(_BYTE *)(a1 + 147);
  if ( (v7 & 8) == 0 )
  {
    v8 = v7 & 0xFE;
    if ( (v2 & 1) != 0 )
      v8 = v8 & 0xFC | 1;
    v9 = v8 | 4;
    if ( (v2 & 4) == 0 )
      v9 = v8;
    v10 = v9 | 2;
    if ( (v2 & 2) == 0 )
      v10 = v9;
    v11 = v10;
    v12 = v10 | 0x10;
    if ( (v2 & 0x10) == 0 )
      v12 = v11;
    v13 = v12;
    v14 = v12 | 0x20;
    if ( (v2 & 0x20) == 0 )
      v14 = v13;
    v15 = v14;
    v16 = v14 | 0x40;
    if ( (v2 & 0x40) == 0 )
      v16 = v15;
    v6 = v16;
    v17 = v16 | 8;
    if ( (v2 & 8) == 0 )
      v17 = v6;
    v18 = v17;
    v19 = (v17 & 2) == 0;
    v20 = v17 | 0x30;
    if ( v19 )
      v20 = v18;
    v5 = 0;
    *(_BYTE *)(a1 + 147) = v20;
  }
  LOBYTE(v6) = v21;
  KiReleaseProcessLockExclusive(a1, v6);
  return v5;
}
