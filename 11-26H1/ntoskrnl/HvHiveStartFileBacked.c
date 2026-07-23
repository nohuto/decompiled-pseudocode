/*
 * XREFs of HvHiveStartFileBacked @ 0x140AC430C
 * Callers:
 *     CmpCreateHive @ 0x1408BC440 (CmpCreateHive.c)
 * Callees:
 *     SetFailureLocation @ 0x14048E3E4 (SetFailureLocation.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpTraceHiveMountStop @ 0x140AC4644 (CmpTraceHiveMountStop.c)
 *     CmpTraceHiveMountStart @ 0x140AC46D0 (CmpTraceHiveMountStart.c)
 *     HvLoadHive @ 0x140AC4740 (HvLoadHive.c)
 *     HvpFillFileName @ 0x140AC4DEC (HvpFillFileName.c)
 *     HvMarkBaseBlockDirty @ 0x140AE1304 (HvMarkBaseBlockDirty.c)
 *     HvpHeaderCheckSum @ 0x140C5E720 (HvpHeaderCheckSum.c)
 */

__int64 __fastcall HvHiveStartFileBacked(
        ULONG_PTR BugCheckParameter2,
        char a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        int a9,
        _OWORD *a10,
        _OWORD *a11,
        _BYTE *a12,
        _DWORD *a13,
        __int64 a14)
{
  __int64 v16; // rdx
  unsigned int v17; // ebp
  int v18; // eax
  __int64 v19; // rbx
  __int64 Hive; // rbx
  char *v22; // rax
  char *v23; // rsi
  int v24; // ebp
  int v25; // eax

  if ( *(_DWORD *)BugCheckParameter2 != -1092567328 || (a3 & 0xF5617EEC) != 0 || a4 > 2 || (v16 = a6, a6 - 1 > 7) )
    __fastfail(5u);
  v17 = a3 & 0xFFFDFFFF;
  if ( !a2 )
    v17 = a3;
  *(_DWORD *)(BugCheckParameter2 + 160) = v17;
  if ( a5 )
  {
    *(_QWORD *)(BugCheckParameter2 + 24) = *a5;
    *(_QWORD *)(BugCheckParameter2 + 32) = a5[1];
    *(_QWORD *)(BugCheckParameter2 + 40) = a5[3];
    *(_QWORD *)(BugCheckParameter2 + 48) = a5[4];
  }
  if ( a4 )
  {
    v18 = 4;
    if ( a4 == 1 )
      v18 = 1;
    *(_DWORD *)(BugCheckParameter2 + 168) = v18;
  }
  else
  {
    *(_DWORD *)(BugCheckParameter2 + 168) = 0;
  }
  *(_DWORD *)(BugCheckParameter2 + 132) = 4096;
  *(_QWORD *)(BugCheckParameter2 + 8) = HvpGetCellPaged;
  *(_DWORD *)(BugCheckParameter2 + 136) = a6;
  *(_QWORD *)(BugCheckParameter2 + 16) = HvpReleaseCellPaged;
  *(_DWORD *)(BugCheckParameter2 + 216) = 2;
  v19 = MEMORY[0xFFFFF78000000014];
  if ( a2 )
  {
    LOBYTE(v16) = 1;
    v22 = (char *)guard_dispatch_icall_no_overrides(*(unsigned int *)(BugCheckParameter2 + 132), v16);
    v23 = v22;
    if ( !v22 )
    {
      LODWORD(Hive) = -1073741670;
      SetFailureLocation(a14, 0, 24, -1073741670, 16);
      return (unsigned int)Hive;
    }
    memset_0(v22, 0, *(unsigned int *)(BugCheckParameter2 + 132));
    *(_DWORD *)v23 = 1718052210;
    *((_DWORD *)v23 + 1) = 1;
    *((_DWORD *)v23 + 2) = 1;
    *((_DWORD *)v23 + 7) = 0;
    *((_DWORD *)v23 + 8) = 1;
    *((_DWORD *)v23 + 9) = -1;
    *((_DWORD *)v23 + 10) = 0;
    *((_DWORD *)v23 + 11) = 1;
    HvpFillFileName(v23, a8);
    *((_DWORD *)v23 + 36) = 0;
    v24 = v17 & 0x80000;
    if ( v24 )
      *((_DWORD *)v23 + 36) = 2;
    *((_DWORD *)v23 + 5) = 1;
    v25 = v24 != 0 ? 6 : 3;
    *((_DWORD *)v23 + 6) = v25;
    *(_DWORD *)(BugCheckParameter2 + 220) = v25;
    *((_DWORD *)v23 + 41) = 1836346738;
    *(_QWORD *)(v23 + 12) = v19;
    if ( a10 )
    {
      *((_OWORD *)v23 + 7) = *a10;
      *((_OWORD *)v23 + 8) = *a10;
    }
    if ( a11 )
      *(_OWORD *)(v23 + 148) = *a11;
    *((_DWORD *)v23 + 127) = HvpHeaderCheckSum(v23);
    *(_QWORD *)(BugCheckParameter2 + 64) = v23;
    *(_DWORD *)(BugCheckParameter2 + 184) = 1;
    *(_DWORD *)(BugCheckParameter2 + 172) = 1;
    *(_DWORD *)(BugCheckParameter2 + 176) = 1;
    *(_BYTE *)(BugCheckParameter2 + 194) = 1;
    if ( a13 )
      *a13 = 825314627;
  }
  else
  {
    CmpTraceHiveMountStart();
    Hive = (unsigned int)HvLoadHive(BugCheckParameter2);
    CmpTraceHiveMountStop(Hive);
    if ( (int)Hive < 0 )
    {
      SetFailureLocation(a14, 0, 24, Hive, 64);
      return (unsigned int)Hive;
    }
    if ( (_DWORD)Hive == 1073741833 && a12 )
      *a12 = 1;
    if ( a13 )
      *a13 = 825445699;
    if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) & 1) != 0 )
    {
      HvMarkBaseBlockDirty(BugCheckParameter2);
      if ( a12 )
        *a12 = 1;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) &= ~1u;
    }
    HvpFillFileName(*(_QWORD *)(BugCheckParameter2 + 64), a8);
  }
  LODWORD(Hive) = 0;
  return (unsigned int)Hive;
}
