/*
 * XREFs of ?ApplySizeConstraints@JointResize@@AEAAXXZ @ 0x18051516C
 * Callers:
 *     ?OnSizeConstraintsQueried@JointResize@@UEAAXPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1801E2FA0 (-OnSizeConstraintsQueried@JointResize@@UEAAXPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 *     _lambda_af26cd4e336a58c3fc15d2bb79fbb070_::operator() @ 0x180515068 (_lambda_af26cd4e336a58c3fc15d2bb79fbb070_--operator().c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18029743C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?value@?$optional@Uhstring@winrt@@@std@@QEGAAAEAUhstring@winrt@@XZ @ 0x1802BBF6C (-value@-$optional@Uhstring@winrt@@@std@@QEGAAAEAUhstring@winrt@@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$ApplySizeConstraints@_KAEAJAEAJAEAJAEAJ@JointResizeTelemetry@@SAX$$QEA_KAEAJ111@Z @ 0x180513CCC (--$ApplySizeConstraints@_KAEAJAEAJAEAJAEAJ@JointResizeTelemetry@@SAX$$QEA_KAEAJ111@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall JointResize::ApplySizeConstraints(JointResize *this)
{
  int v2; // eax
  char v3; // bl
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // rsi
  char v7; // al
  _BYTE *v8; // r13
  _BYTE *v9; // r12
  int *v10; // rbx
  int v11; // edi
  int v12; // ebx
  _DWORD *v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // ebx
  int *v17; // rbx
  int *v18; // rax
  int v19; // edi
  int v20; // ebx
  _DWORD *v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  int v24; // ebx
  JointResize *v25; // rsi
  int v26; // edi
  int v27; // ebx
  int v28; // ebx
  int v29; // edi
  _DWORD *v30; // rbx
  _DWORD *v31; // rax
  int v32; // ebx
  int v33; // ebx
  int v34; // edi
  int v35; // ebx
  int v36; // ebx
  int v37; // edi
  int v38; // ebx
  int v39; // ebx
  int v40; // [rsp+28h] [rbp-49h]
  __int64 v42; // [rsp+38h] [rbp-39h]
  __int64 v43; // [rsp+40h] [rbp-31h]
  _BYTE v44[8]; // [rsp+48h] [rbp-29h] BYREF
  char v45; // [rsp+50h] [rbp-21h]
  _BYTE v46[8]; // [rsp+58h] [rbp-19h] BYREF
  char v47; // [rsp+60h] [rbp-11h]
  _BYTE v48[8]; // [rsp+68h] [rbp-9h] BYREF
  char v49; // [rsp+70h] [rbp-1h]
  _BYTE v50[8]; // [rsp+78h] [rbp+7h] BYREF
  char v51; // [rsp+80h] [rbp+Fh]
  __int64 v52; // [rsp+88h] [rbp+17h]
  struct tagRECT rcDst; // [rsp+90h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  if ( *((_QWORD *)this + 36) )
  {
    rcDst = 0LL;
    v2 = (*(__int64 (__fastcall **)(_QWORD, struct tagRECT *))(**((_QWORD **)this + 26) + 128LL))(
           *((_QWORD *)this + 26),
           &rcDst);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x312,
        (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
        (const char *)(unsigned int)v2);
    v3 = 0;
    v51 = 0;
    v47 = 0;
    v45 = 0;
    v49 = 0;
    v4 = *((_QWORD *)this + 27);
    if ( v4 != *((_QWORD *)this + 28) )
    {
      v5 = v4 + 56;
      v6 = *((_QWORD *)this + 28);
      do
      {
        UnionRect(&rcDst, &rcDst, (const RECT *)(v5 - 32));
        v7 = *(_BYTE *)(v5 - 16);
        v8 = v44;
        if ( v7 )
          v8 = v50;
        v9 = v48;
        if ( v7 )
          v9 = v46;
        if ( *(_BYTE *)(v5 + 8) )
        {
          if ( v8[8] )
          {
            v10 = (int *)std::optional<winrt::hstring>::value(v5);
            v11 = *(_DWORD *)std::optional<winrt::hstring>::value((__int64)v8);
            v12 = *v10;
            v13 = (_DWORD *)std::optional<winrt::hstring>::value((__int64)v8);
            if ( v11 >= v12 )
              v12 = v11;
            *v13 = v12;
            v14 = std::optional<winrt::hstring>::value(v5);
            v15 = std::optional<winrt::hstring>::value((__int64)v8);
            v16 = *(_DWORD *)(v14 + 4);
            if ( *(_DWORD *)(v15 + 4) >= v16 )
              v16 = *(_DWORD *)(v15 + 4);
            *(_DWORD *)(std::optional<winrt::hstring>::value((__int64)v8) + 4) = v16;
          }
          else
          {
            *(_QWORD *)v8 = *(_QWORD *)v5;
            *((_DWORD *)v8 + 2) = *(_DWORD *)(v5 + 8);
          }
          v3 = 1;
        }
        if ( *(_BYTE *)(v5 + 20) )
        {
          if ( v9[8] )
          {
            v17 = (int *)std::optional<winrt::hstring>::value(v5 + 12);
            v18 = (int *)std::optional<winrt::hstring>::value((__int64)v9);
            v19 = *v17;
            v20 = *v18;
            v21 = (_DWORD *)std::optional<winrt::hstring>::value((__int64)v9);
            if ( v19 >= v20 )
              v19 = v20;
            *v21 = v19;
            v22 = std::optional<winrt::hstring>::value(v5 + 12);
            v23 = std::optional<winrt::hstring>::value((__int64)v9);
            v24 = *(_DWORD *)(v22 + 4);
            if ( v24 >= *(_DWORD *)(v23 + 4) )
              v24 = *(_DWORD *)(v23 + 4);
            *(_DWORD *)(std::optional<winrt::hstring>::value((__int64)v9) + 4) = v24;
          }
          else
          {
            *(_QWORD *)v9 = *(_QWORD *)(v5 + 12);
            *((_DWORD *)v9 + 2) = *(_DWORD *)(v5 + 20);
          }
          v3 = 1;
        }
        v4 += 96LL;
        v5 += 96LL;
      }
      while ( v4 != v6 );
      v25 = this;
      if ( v3 )
      {
        if ( *((_DWORD *)this + 80) == 10 || *((_DWORD *)this + 80) == 11 )
        {
          if ( v45 )
            v34 = *(_DWORD *)std::optional<winrt::hstring>::value((__int64)v44);
          else
            v34 = 1;
          if ( v47 )
          {
            v35 = rcDst.right - rcDst.left;
            v36 = v35 - *(_DWORD *)std::optional<winrt::hstring>::value((__int64)v46);
          }
          else
          {
            v36 = 1;
          }
          if ( v36 >= v34 )
            v34 = v36;
          LODWORD(v43) = v34;
          if ( v49 )
            v37 = *(_DWORD *)std::optional<winrt::hstring>::value((__int64)v48);
          else
            v37 = *((_DWORD *)this + 76) - *((_DWORD *)this + 74);
          if ( v51 )
          {
            v38 = rcDst.right - rcDst.left;
            v39 = v38 - *(_DWORD *)std::optional<winrt::hstring>::value((__int64)v50);
          }
          else
          {
            v39 = *((_DWORD *)this + 76) - *((_DWORD *)this + 74);
          }
          if ( v37 >= v39 )
            v37 = v39;
          LODWORD(v42) = v37;
          HIDWORD(v43) = 1;
          HIDWORD(v42) = *((_DWORD *)v25 + 77) - *((_DWORD *)v25 + 75);
        }
        else
        {
          if ( *((_DWORD *)this + 80) != 12 && *((_DWORD *)this + 80) != 15 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x372,
              (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
              (const char *)0x80070057LL,
              v40);
          if ( v45 )
            v26 = *(_DWORD *)(std::optional<winrt::hstring>::value((__int64)v44) + 4);
          else
            v26 = 1;
          if ( v47 )
          {
            v27 = rcDst.bottom - rcDst.top;
            v28 = v27 - *(_DWORD *)(std::optional<winrt::hstring>::value((__int64)v46) + 4);
          }
          else
          {
            v28 = 1;
          }
          if ( v28 >= v26 )
            v26 = v28;
          HIDWORD(v43) = v26;
          if ( v49 )
          {
            v29 = *(_DWORD *)(std::optional<winrt::hstring>::value((__int64)v48) + 4);
            v30 = (_DWORD *)((char *)this + 308);
            v31 = (_DWORD *)((char *)this + 300);
          }
          else
          {
            v30 = (_DWORD *)((char *)this + 308);
            v31 = (_DWORD *)((char *)this + 300);
            v29 = *((_DWORD *)this + 77) - *((_DWORD *)this + 75);
          }
          if ( v51 )
          {
            v32 = rcDst.bottom - rcDst.top;
            v33 = v32 - *(_DWORD *)(std::optional<winrt::hstring>::value((__int64)v50) + 4);
          }
          else
          {
            v33 = *v30 - *v31;
          }
          if ( v29 >= v33 )
            v29 = v33;
          HIDWORD(v42) = v29;
          LODWORD(v43) = 1;
          LODWORD(v42) = *((_DWORD *)v25 + 76) - *((_DWORD *)v25 + 74);
        }
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**((_QWORD **)v25 + 19) + 104LL))(
          *((_QWORD *)v25 + 19),
          *((_QWORD *)v25 + 36),
          v43,
          v42);
        v52 = *((_QWORD *)v25 + 36);
        JointResizeTelemetry::ApplySizeConstraints<unsigned __int64,long &,long &,long &,long &>();
      }
    }
  }
}
