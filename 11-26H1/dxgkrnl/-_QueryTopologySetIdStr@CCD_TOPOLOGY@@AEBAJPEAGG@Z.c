/*
 * XREFs of ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x140348330
 * Callers:
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x140349264 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140039FEC (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x140059AF4 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ?IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z @ 0x140337A6C (-IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z.c)
 *     ?DxgkIsTargetNonStandard@@YA_NAEBU_LUID@@I@Z @ 0x140348664 (-DxgkIsTargetNonStandard@@YA_NAEBU_LUID@@I@Z.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x140348B08 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_QueryTopologySetIdStr(CCD_TOPOLOGY *this, char *a2, unsigned __int16 a3)
{
  char *v3; // rsi
  __int64 result; // rax
  unsigned int v6; // ebp
  unsigned __int16 v7; // bx
  unsigned int i; // r13d
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // r9
  unsigned int v14; // r12d
  __int64 v15; // rcx
  __int64 v16; // r14
  unsigned __int16 v17; // bx
  unsigned __int16 *v18; // rsi
  int v19; // eax
  __int64 v20; // rcx
  unsigned __int16 v21; // [rsp+70h] [rbp+8h]
  unsigned __int16 v22; // [rsp+80h] [rbp+18h] BYREF

  v22 = a3;
  v3 = a2;
  if ( *(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
  {
    v6 = -1073741823;
    v21 = 0;
    v7 = 16385;
    for ( i = 0; ; ++i )
    {
      v9 = *((_QWORD *)this + 8);
      if ( i >= *(unsigned __int16 *)(v9 + 20) )
        return v6;
      v10 = 296LL * i;
      if ( DxgkIsTargetNonStandard((const struct _LUID *)(v10 + v9 + 72), *(_DWORD *)(v10 + v9 + 84)) )
      {
        *(_DWORD *)(*((_QWORD *)this + 8) + v10 + 320) = 0;
      }
      else if ( CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, i) )
      {
        if ( i )
        {
          if ( !v7 )
            return 3221225485LL;
          result = RtlStringCchCopyW(v3, v7, (char *)L"+");
          if ( (_DWORD)result == -2147483643 )
            return 3221225507LL;
          if ( (int)result < 0 )
            return result;
          --v7;
          v3 += 2;
        }
        v11 = *((_QWORD *)this + 8);
        v22 = 0;
        v12 = CCD_TOPOLOGY::_QueryMonitorIdStr(
                (const struct _LUID *)(v10 + v11 + 72),
                *(_DWORD *)(v11 + v10 + 84),
                (unsigned __int16 *)v3,
                v7,
                &v22);
        v13 = *((_QWORD *)this + 8);
        v6 = v12;
        if ( v12 < 0 )
        {
          WdLogSingleEntry5(
            2LL,
            v12,
            *(unsigned int *)(v10 + v13 + 84),
            v13,
            *(int *)(v10 + v13 + 76),
            *(unsigned int *)(v10 + v13 + 72));
          WdLogGlobalForLineNumber = 3764;
          return v6;
        }
        v7 -= v22;
        v14 = i + 1;
        *(_DWORD *)(v10 + v13 + 320) = v21++;
        v3 += 2 * v22;
        while ( v14 < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
        {
          if ( CCD_TOPOLOGY::IsSameCloneGroup(this, i, v14, 0) )
          {
            v15 = *((_QWORD *)this + 8);
            v16 = 296LL * v14;
            if ( *(_DWORD *)(v16 + v15 + 72) == *(_DWORD *)(v15 + v10 + 72)
              && *(_DWORD *)(v16 + v15 + 76) == *(_DWORD *)(v15 + v10 + 76)
              && *(_DWORD *)(v16 + v15 + 84) == *(_DWORD *)(v15 + v10 + 84) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 3788;
            }
            if ( !v7 )
              return 3221225485LL;
            result = RtlStringCchCopyW(v3, v7, (char *)L"*");
            if ( (_DWORD)result == -2147483643 )
              return 3221225507LL;
            if ( (int)result < 0 )
              return result;
            v17 = v7 - 1;
            v18 = (unsigned __int16 *)(v3 + 2);
            v19 = CCD_TOPOLOGY::_QueryMonitorIdStr(
                    (const struct _LUID *)(v16 + *((_QWORD *)this + 8) + 72LL),
                    *(_DWORD *)(*((_QWORD *)this + 8) + v16 + 84),
                    v18,
                    v17,
                    &v22);
            v20 = *((_QWORD *)this + 8);
            v6 = v19;
            if ( v19 < 0 )
            {
              WdLogSingleEntry5(
                2LL,
                v19,
                *(unsigned int *)(v20 + v16 + 84),
                v20,
                *(int *)(v20 + v16 + 76),
                *(unsigned int *)(v20 + v16 + 72));
              WdLogGlobalForLineNumber = 3829;
              return v6;
            }
            v7 = v17 - v22;
            *(_DWORD *)(v20 + v16 + 320) = v21++;
            v3 = (char *)&v18[v22];
          }
          ++v14;
        }
      }
    }
  }
  *(_WORD *)a2 = 0;
  return 0LL;
}
