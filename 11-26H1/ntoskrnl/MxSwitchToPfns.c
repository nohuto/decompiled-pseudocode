/*
 * XREFs of MxSwitchToPfns @ 0x140CFE6E0
 * Callers:
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 * Callees:
 *     MiIssueFlushTbEntire @ 0x1402519A0 (MiIssueFlushTbEntire.c)
 *     MiSetPfnContainingFrame @ 0x14033DC90 (MiSetPfnContainingFrame.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HvlChangeIsolatedMemoryVisibility @ 0x1405C1420 (HvlChangeIsolatedMemoryVisibility.c)
 *     MiCreatePfnTemplate @ 0x1406EBD98 (MiCreatePfnTemplate.c)
 *     MxCreateDescriptorPfns @ 0x140CFBB94 (MxCreateDescriptorPfns.c)
 *     MxInsertFreeZeroPages @ 0x140CFD9C8 (MxInsertFreeZeroPages.c)
 *     MxInsertPagesInFreeList @ 0x140CFDB00 (MxInsertPagesInFreeList.c)
 */

__int64 __fastcall MxSwitchToPfns(__int64 a1)
{
  ULONG_PTR v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rbx
  int v5; // eax
  unsigned __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD **v11; // rcx
  __int64 v12; // rax
  _QWORD *i; // rcx
  unsigned __int64 v14; // r8
  __int64 result; // rax
  __m128i v16[3]; // [rsp+38h] [rbp-9h] BYREF
  __m128i v17[3]; // [rsp+68h] [rbp+27h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+A8h] [rbp+67h] BYREF

  memset(v17, 0, sizeof(v17));
  memset(v16, 0, sizeof(v16));
  MiCreatePfnTemplate((__int64)v17, 64, 0);
  MiCreatePfnTemplate((__int64)v16, 8388736, 0);
  v2 = 48 * qword_140E3D540 - 0x220000000000LL;
  if ( !qword_140E3D540 && !(unsigned __int16)*(_DWORD *)(v2 + 32) )
  {
    MiSetPfnContainingFrame(48 * qword_140E3D540 - 0x220000000000LL, 0LL);
    *(_QWORD *)(v2 + 8) = 0xFFFFF68000000000uLL;
    *(_QWORD *)(v2 + 24) = *(_QWORD *)(v2 + 24) & 0xC000000000000000uLL | 1;
    *(_DWORD *)(v2 + 32) = *(_DWORD *)(v2 + 32) & 0xFFF8FFFF | 0x50000;
    *(_DWORD *)(v2 + 32) = *(_DWORD *)(v2 + 32) & 0xFF3FFFFF | 0x400000;
    *(_QWORD *)(v2 + 40) |= 0x40000000000000uLL;
  }
  v3 = *(_QWORD *)(a1 + 360);
  if ( (v3 & 1) == 0 )
  {
    v4 = *(_QWORD *)(a1 + 360);
    while ( 1 )
    {
LABEL_33:
      if ( !v4 )
        goto LABEL_34;
      v5 = *(_DWORD *)(v4 + 24);
      if ( v5 != 2 && v5 != 24 )
      {
        if ( v5 == 29 )
        {
          if ( (MiFlags & 0x4000) == 0 )
            goto LABEL_24;
        }
        else if ( v5 == 42 )
        {
          v9 = *(_QWORD *)(v4 + 40);
          v10 = *(_QWORD *)(v4 + 32);
          BugCheckParameter4 = 0LL;
          if ( (int)HvlChangeIsolatedMemoryVisibility(v10, v9, 0, &BugCheckParameter4) < 0 )
            KeBugCheckEx(0x1Au, 0x3030318uLL, *(_QWORD *)(v4 + 32), *(_QWORD *)(v4 + 40), BugCheckParameter4);
LABEL_24:
          MxInsertPagesInFreeList(v4);
          *(_DWORD *)(v4 + 24) = 2;
          goto LABEL_26;
        }
        v6 = *(int *)(v4 + 24);
        if ( (_DWORD)v6 == 2 || (unsigned int)v6 <= 0x18 && (v7 = 16777520, _bittest(&v7, v6)) )
        {
          MxInsertPagesInFreeList(v4);
        }
        else if ( (_DWORD)v6 != 6 && (unsigned int)(v6 - 30) > 1 && (_DWORD)v6 != 32 && (_DWORD)v6 != 34 )
        {
          if ( (unsigned int)v6 > 0x2C || (v8 = 0x15C000C00008LL, !_bittest64(&v8, v6)) )
            MxCreateDescriptorPfns(v4, v17, v16);
        }
      }
LABEL_26:
      v11 = *(_QWORD ***)(v4 + 8);
      v12 = v4;
      if ( v11 )
      {
        v4 = *(_QWORD *)(v4 + 8);
        for ( i = *v11; i; i = (_QWORD *)*i )
          v4 = (__int64)i;
      }
      else
      {
        while ( 1 )
        {
          v4 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v4 || *(_QWORD *)v4 == v12 )
            break;
          v12 = v4;
        }
      }
    }
  }
  if ( v3 != 1 )
  {
    v4 = v3 ^ ((a1 + 352) | 1);
    goto LABEL_33;
  }
LABEL_34:
  MxInsertFreeZeroPages(a1);
  result = MiIssueFlushTbEntire((_KPROCESS *)2, (volatile _KAFFINITY_EX *)0xFFFFFFFFLL, v14);
  MiFlags |= 0x40000000uLL;
  return result;
}
