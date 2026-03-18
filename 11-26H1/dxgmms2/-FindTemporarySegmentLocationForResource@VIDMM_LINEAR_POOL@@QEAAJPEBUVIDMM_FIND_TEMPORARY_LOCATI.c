/*
 * XREFs of ?FindTemporarySegmentLocationForResource@VIDMM_LINEAR_POOL@@QEAAJPEBUVIDMM_FIND_TEMPORARY_LOCATION_ARGS@@_NPEA_K2@Z @ 0x1400BFBB4
 * Callers:
 *     ?MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z @ 0x1400BEEBC (-MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::FindTemporarySegmentLocationForResource(
        VIDMM_LINEAR_POOL *this,
        const struct VIDMM_FIND_TEMPORARY_LOCATION_ARGS *a2,
        __int64 a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5)
{
  __int64 v5; // r12
  char *v6; // r13
  char *v7; // r14
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rbx
  __int64 v10; // r12
  char v11; // bp
  char *v13; // rsi
  unsigned __int64 v14; // rcx
  char v15; // al
  __int64 v16; // rcx
  _QWORD v18[5]; // [rsp+20h] [rbp-68h] BYREF
  char *v19; // [rsp+48h] [rbp-40h] BYREF
  char v20; // [rsp+58h] [rbp-30h]

  v5 = *((_QWORD *)a2 + 3);
  v6 = (char *)this + 80;
  v7 = (char *)*((_QWORD *)this + 10);
  v8 = 0LL;
  v9 = 0LL;
  v20 = 2;
  v10 = v5 - 1;
  v18[2] = 0LL;
  v11 = a3;
  while ( v7 != v6 )
  {
    v13 = v7 - 40;
    v14 = *((_QWORD *)v7 - 5);
    if ( v14 != v9 )
    {
      v19 = v7;
      v18[1] = v14 - v9;
      v13 = (char *)v18;
      v14 = v9;
      v18[0] = v9;
      v7 = (char *)&v19;
    }
    v9 = v14 + *((_QWORD *)v13 + 1);
    if ( v9 > *((_QWORD *)a2 + 1) )
      break;
    if ( v14 >= *(_QWORD *)a2
      && ((v15 = v13[56], v15 == 2) || v15 == 3)
      && (!v11 || v15 == 2)
      && ((v16 = *((_QWORD *)v13 + 2)) == 0
       || (*((unsigned __int8 (__fastcall **)(__int64, const struct VIDMM_FIND_TEMPORARY_LOCATION_ARGS *, __int64))a2 + 4))(
            v16,
            a2,
            a3))
      && (*(_QWORD *)v13 >= *((_QWORD *)a2 + 6) || v9 <= *((_QWORD *)a2 + 5)) )
    {
      if ( v8 + *((_QWORD *)a2 + 2) <= v9 )
      {
        *a4 = v8;
        *a5 = v9;
        return 0LL;
      }
    }
    else
    {
      v8 = ~v10 & (v10 + v9);
    }
    v7 = *(char **)v7;
  }
  if ( !v11 )
  {
    WdLogSingleEntry1(3LL, *((_QWORD *)a2 + 2));
    WdLogGlobalForLineNumber = 3386;
  }
  return 3221225473LL;
}
