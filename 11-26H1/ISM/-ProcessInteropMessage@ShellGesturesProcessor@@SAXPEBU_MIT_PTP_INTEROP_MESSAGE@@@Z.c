/*
 * XREFs of ?ProcessInteropMessage@ShellGesturesProcessor@@SAXPEBU_MIT_PTP_INTEROP_MESSAGE@@@Z @ 0x18015D158
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_98aaeec04a7dfe8bb0f5f2f107a502d3__void__MIT_PTP_INTEROP_MESSAGE_const___::_Do_call @ 0x1800F3CF0 (std--_Func_impl_no_alloc__lambda_98aaeec04a7dfe8bb0f5f2f107a502d3__void__MIT_PTP_IN_ea_1800F3CF0.c)
 * Callees:
 *     ?IsDetachedFromTree@ShellGesturesClientProxy@@QEAA_NXZ @ 0x18007C7F0 (-IsDetachedFromTree@ShellGesturesClientProxy@@QEAA_NXZ.c)
 *     ?TraceClients@ShellGesturesProcessor@@CAXXZ @ 0x180095760 (-TraceClients@ShellGesturesProcessor@@CAXXZ.c)
 *     ??D?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@std@@QEBAAEAPEAVShellGesturesClientProxy@@XZ @ 0x1800961C0 (--D-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_simple_types@PEAVShellGesturesClientProxy.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x1800F4C34 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 *     ??$IsShellClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z @ 0x18015C1C4 (--$IsShellClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z.c)
 *     ??$ShouldSelectClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z @ 0x18015C2A4 (--$ShouldSelectClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z.c)
 *     ?GetTouchpadSupportedGestures@BamoShellGesturesClientProxy@@UEAA?AW4TouchpadGlobalGestureKinds@Input@Internal@UI@Windows@@XZ @ 0x18015CE40 (-GetTouchpadSupportedGestures@BamoShellGesturesClientProxy@@UEAA-AW4TouchpadGlobalGestureKinds@I.c)
 *     ?TouchpadActionPerformed@BamoShellGesturesClientProxy@@UEAAJ_JW4TouchpadGlobalAction@Input@Internal@UI@Windows@@@Z @ 0x18015D860 (-TouchpadActionPerformed@BamoShellGesturesClientProxy@@UEAAJ_JW4TouchpadGlobalAction@Input@Inter.c)
 *     ?TouchpadInteropMessage@ShellGestures@InputTraceLogging@@SAXW4TouchpadGlobalAction@Input@Internal@UI@Windows@@@Z @ 0x18015DA14 (-TouchpadInteropMessage@ShellGestures@InputTraceLogging@@SAXW4TouchpadGlobalAction@Input@Interna.c)
 *     ?HandlesInput@ShellGesturesClientProxy@@QEAA_NW4InputType@@_NK@Z @ 0x18015E144 (-HandlesInput@ShellGesturesClientProxy@@QEAA_NW4InputType@@_NK@Z.c)
 */

void __fastcall ShellGesturesProcessor::ProcessInteropMessage(const struct _MIT_PTP_INTEROP_MESSAGE *a1)
{
  int v1; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  unsigned int v10; // edi
  int v11; // ebx
  const char *v12; // rsi
  __int64 v13; // r15
  ShellGesturesClientProxy *v14; // rbp
  char v15; // al
  ShellGesturesClientProxy **v16; // rcx
  __int64 v17; // rcx
  const char *v18[7]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF
  __int64 v21; // [rsp+68h] [rbp+10h] BYREF

  v1 = *((_DWORD *)a1 + 2);
  if ( !v1 )
  {
    v10 = 0;
    goto LABEL_22;
  }
  v3 = v1 - 1;
  if ( !v3 )
  {
    v10 = 1;
    goto LABEL_20;
  }
  v4 = v3 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( !v5 )
    {
      v10 = 3;
      goto LABEL_22;
    }
    v6 = v5 - 1;
    if ( !v6 )
    {
      v10 = 4;
      goto LABEL_20;
    }
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 != 1 )
            wil::details::in1diag3::FailFast_UnexpectedMsg(
              retaddr,
              (void *)0x494,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgestures\\processor\\"
                   "shellgesturesprocessor.cpp",
              "Unmapped enum value",
              v18[0]);
          v10 = 8;
          goto LABEL_18;
        }
        v10 = 7;
LABEL_20:
        v11 = 16;
        goto LABEL_23;
      }
      v10 = 6;
LABEL_22:
      v11 = 8;
      goto LABEL_23;
    }
    v10 = 5;
  }
  else
  {
    v10 = 2;
  }
LABEL_18:
  v11 = 32;
LABEL_23:
  InputTraceLogging::ShellGestures::TouchpadInteropMessage(v10);
  ShellGesturesProcessor::TraceClients();
  v12 = (const char *)qword_180253FE8;
  v18[0] = (const char *)&ShellGesturesProcessor::s_clients;
  v13 = qword_180253FE8 + qword_180253FF0;
  v21 = 0LL;
  v20 = 0LL;
  while ( 1 )
  {
    v18[1] = v12;
    if ( v12 == (const char *)v13 )
      break;
    v14 = *(ShellGesturesClientProxy **)std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>::operator*((__int64)v18);
    if ( ShellGesturesClientProxy::IsDetachedFromTree(v14)
      && (unsigned __int8)ShellGesturesClientProxy::HandlesInput(v14, 0x1000000LL, 0LL, 0LL)
      && ((unsigned int)BamoShellGesturesClientProxy::GetTouchpadSupportedGestures((__int64)v14 + 8) & v11) != 0
      && ShouldSelectClient<ShellGesturesClientProxy>((__int64)v14) )
    {
      v15 = IsShellClient<ShellGesturesClientProxy>((__int64)v14);
      v16 = (ShellGesturesClientProxy **)&v21;
      if ( v15 )
        v16 = (ShellGesturesClientProxy **)&v20;
      *v16 = v14;
    }
    ++v12;
  }
  v17 = v20;
  if ( v21 )
    v17 = v21;
  if ( v17 )
    BamoShellGesturesClientProxy::TouchpadActionPerformed(v17 + 8, *(_QWORD *)a1, v10);
}
