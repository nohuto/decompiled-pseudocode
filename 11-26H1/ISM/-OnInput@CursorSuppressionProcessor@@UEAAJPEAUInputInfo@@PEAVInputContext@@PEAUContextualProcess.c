/*
 * XREFs of ?OnInput@CursorSuppressionProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18014A690
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180052670 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??$StateChange@AEAY07$$CBG@TestCursorTraceLogging@@SAXAEAY07$$CBG@Z @ 0x18014A14C (--$StateChange@AEAY07$$CBG@TestCursorTraceLogging@@SAXAEAY07$$CBG@Z.c)
 *     ??$StateChange@AEAY0L@$$CBG@TestCursorTraceLogging@@SAXAEAY0L@$$CBG@Z @ 0x18014A1D4 (--$StateChange@AEAY0L@$$CBG@TestCursorTraceLogging@@SAXAEAY0L@$$CBG@Z.c)
 *     ?SetSuppressionState@Cursor@InputTraceLogging@@SAX_KW4CursorSuppressionState@@@Z @ 0x18014A7E0 (-SetSuppressionState@Cursor@InputTraceLogging@@SAX_KW4CursorSuppressionState@@@Z.c)
 *     ?SuppressCursor@CursorSuppressionProcessor@@AEAAX_N@Z @ 0x18014A888 (-SuppressCursor@CursorSuppressionProcessor@@AEAAX_N@Z.c)
 */

__int64 __fastcall CursorSuppressionProcessor::OnInput(
        CursorSuppressionProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  char *v6; // rdi
  __int64 v8; // rcx
  char *v9; // rax
  CursorSuppressionProcessor *v10; // rcx
  WCHAR *v11; // rcx
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  *((_DWORD *)a4 + 2) = 0;
  v6 = (char *)a2 + 320;
  gsl::details::extent_type<-1>::extent_type<-1>(v13, *((unsigned int *)a2 + 79));
  if ( v13[0] == -1LL || !v6 && v13[0] )
  {
    _o_terminate(v8);
    __debugbreak();
    JUMPOUT(0x18014A78BLL);
  }
  v9 = &v6[144 * v13[0]];
  while ( v6 != v9 )
  {
    if ( (v6[12] & 6) != 0 )
    {
      v10 = (CursorSuppressionProcessor *)((char *)this - 8);
      *((_DWORD *)a4 + 2) = 4;
      if ( *((_DWORD *)this + 20) != 1 )
      {
        if ( *((_DWORD *)v10 + 22) != 2 )
          return 0LL;
        CursorSuppressionProcessor::SuppressCursor(v10, 1);
      }
      *((_DWORD *)this + 20) = 0;
      TestCursorTraceLogging::StateChange<unsigned short const (&)[11]>((const WCHAR *)v10);
      goto LABEL_17;
    }
    v6 += 144;
  }
  v11 = (WCHAR *)((char *)this - 8);
  if ( !*((_DWORD *)this + 20) )
  {
LABEL_16:
    *((_DWORD *)this + 20) = 1;
    TestCursorTraceLogging::StateChange<unsigned short const (&)[8]>(v11);
LABEL_17:
    InputTraceLogging::Cursor::SetSuppressionState(*((unsigned int *)a2 + 1), *((unsigned int *)this + 20));
    return 0LL;
  }
  if ( *((_DWORD *)v11 + 22) == 3 && (*(_BYTE *)a2 & 0x10) != 0 )
  {
    CursorSuppressionProcessor::SuppressCursor((CursorSuppressionProcessor *)v11, 1);
    goto LABEL_16;
  }
  return 0LL;
}
