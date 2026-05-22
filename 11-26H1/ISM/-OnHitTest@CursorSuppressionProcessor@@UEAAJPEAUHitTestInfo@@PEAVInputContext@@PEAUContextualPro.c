/*
 * XREFs of ?OnHitTest@CursorSuppressionProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18014A4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInputSiteForContainer@@YA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18004FA30 (-GetInputSiteForContainer@@YA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@AEBV-$vector@V-$ComPtr@VInp.c)
 *     ??$StateChange@AEAY0BB@$$CBG@TestCursorTraceLogging@@SAXAEAY0BB@$$CBG@Z @ 0x18014A190 (--$StateChange@AEAY0BB@$$CBG@TestCursorTraceLogging@@SAXAEAY0BB@$$CBG@Z.c)
 *     ??$StateChange@AEAY0L@$$CBG@TestCursorTraceLogging@@SAXAEAY0L@$$CBG@Z @ 0x18014A1D4 (--$StateChange@AEAY0L@$$CBG@TestCursorTraceLogging@@SAXAEAY0L@$$CBG@Z.c)
 *     ??$StateChange@AEAY0O@$$CBG@TestCursorTraceLogging@@SAXAEAY0O@$$CBG@Z @ 0x18014A218 (--$StateChange@AEAY0O@$$CBG@TestCursorTraceLogging@@SAXAEAY0O@$$CBG@Z.c)
 *     ?GetCursorSuppressionPolicyFromInputSites@CursorSuppressionProcessor@@QEAA?AW4SuppressionPolicy@Input@Internal@UI@Windows@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18014A370 (-GetCursorSuppressionPolicyFromInputSites@CursorSuppressionProcessor@@QEAA-AW4SuppressionPolicy@.c)
 *     ?SetSuppressionState@Cursor@InputTraceLogging@@SAX_KW4CursorSuppressionState@@@Z @ 0x18014A7E0 (-SetSuppressionState@Cursor@InputTraceLogging@@SAX_KW4CursorSuppressionState@@@Z.c)
 *     ?SuppressCursor@CursorSuppressionProcessor@@AEAAX_N@Z @ 0x18014A888 (-SuppressCursor@CursorSuppressionProcessor@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CursorSuppressionProcessor::OnHitTest(
        CursorSuppressionProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  CursorSuppressionProcessor *v6; // rbx
  const WCHAR *v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // r14
  CursorSuppressionProcessor *v10; // rcx
  const WCHAR *v11; // rcx
  CursorSuppressionProcessor *pvParam; // [rsp+48h] [rbp+10h] BYREF

  v6 = this;
  *(_DWORD *)a4 = 0;
  if ( (*(_BYTE *)a2 & 2) != 0 )
  {
    pvParam = 0LL;
    GetCursorPos((LPPOINT)&pvParam);
    if ( *((_DWORD *)v6 + 20) != 1 )
    {
LABEL_5:
      *(_QWORD *)((char *)v6 + 84) = pvParam;
      return 0LL;
    }
    if ( *(CursorSuppressionProcessor **)((char *)v6 + 84) != pvParam )
    {
      CursorSuppressionProcessor::SuppressCursor((CursorSuppressionProcessor *)((char *)v6 - 8), 0);
      *((_DWORD *)v6 + 20) = 2;
      TestCursorTraceLogging::StateChange<unsigned short const (&)[14]>(v7);
      InputTraceLogging::Cursor::SetSuppressionState(*((unsigned int *)a2 + 1), *((unsigned int *)v6 + 20));
      goto LABEL_5;
    }
  }
  else if ( (*(_BYTE *)a2 & 0x18) != 0 )
  {
    if ( (*((_BYTE *)a2 + 32) & 6) != 0 )
    {
      v8 = *((_QWORD *)a3 + 22);
      if ( (*(_BYTE *)a2 & 0x10) == 0 )
        goto LABEL_27;
      v9 = *GetInputSiteForContainer((__int64 *)&pvParam, (__int64 **)(*(_QWORD *)(v8 + 104) - 24LL));
      this = pvParam;
      if ( pvParam )
      {
        pvParam = 0LL;
        (*(void (__fastcall **)(CursorSuppressionProcessor *))(*(_QWORD *)this + 16LL))(this);
      }
      if ( v9
        && (LODWORD(pvParam) = 0, SystemParametersInfoW(0x201Eu, 0, &pvParam, 0))
        && ((unsigned __int8)pvParam & 0x20) != 0 )
      {
        *(_DWORD *)a4 = 3;
        v10 = (CursorSuppressionProcessor *)((char *)v6 - 8);
        if ( *((_DWORD *)v6 + 20) != 3 )
        {
          if ( *((_DWORD *)v10 + 22) != 2 )
            CursorSuppressionProcessor::SuppressCursor(v10, 0);
          *((_DWORD *)v6 + 20) = 3;
          TestCursorTraceLogging::StateChange<unsigned short const (&)[17]>((const WCHAR *)v10);
          InputTraceLogging::Cursor::SetSuppressionState(*((unsigned int *)a2 + 1), *((unsigned int *)v6 + 20));
        }
      }
      else
      {
LABEL_27:
        if ( !(unsigned int)CursorSuppressionProcessor::GetCursorSuppressionPolicyFromInputSites(
                              (__int64)this,
                              (__int64 *)(*(_QWORD *)(v8 + 104) - 24LL)) )
        {
          if ( (*(_BYTE *)a2 & 0x10) != 0 && *((_DWORD *)v6 + 20) == 3 )
          {
            CursorSuppressionProcessor::SuppressCursor((CursorSuppressionProcessor *)((char *)v6 - 8), 1);
            *((_DWORD *)v6 + 20) = 0;
            TestCursorTraceLogging::StateChange<unsigned short const (&)[11]>(v11);
            InputTraceLogging::Cursor::SetSuppressionState(*((unsigned int *)a2 + 1), *((unsigned int *)v6 + 20));
          }
          *(_DWORD *)a4 = 3;
        }
      }
    }
    else
    {
      *(_DWORD *)a4 = 3;
    }
  }
  return 0LL;
}
