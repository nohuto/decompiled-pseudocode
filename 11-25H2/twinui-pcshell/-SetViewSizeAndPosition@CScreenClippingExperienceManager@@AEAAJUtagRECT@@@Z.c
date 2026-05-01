/*
 * XREFs of ?SetViewSizeAndPosition@CScreenClippingExperienceManager@@AEAAJUtagRECT@@@Z @ 0x18029CE38
 * Callers:
 *     ?SizeViewOnCreation@CScreenClippingExperienceManager@@AEAAJXZ @ 0x18029CD28 (-SizeViewOnCreation@CScreenClippingExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800310C4 (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x18015427C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x1801E24E0 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CScreenClippingExperienceManager::SetViewSizeAndPosition(
        CScreenClippingExperienceManager *this,
        struct tagRECT *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r9
  LONG bottom; // edx
  int v7; // ebx
  __int64 v8; // rdx
  LONG v10; // [rsp+40h] [rbp-18h] BYREF
  LONG right; // [rsp+44h] [rbp-14h] BYREF
  LONG top; // [rsp+48h] [rbp-10h] BYREF
  int v13[3]; // [rsp+4Ch] [rbp-Ch] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = SingleViewExperienceLogging::Provider((__int64)this);
  if ( *(_DWORD *)v4 > 5u )
  {
    bottom = a2->bottom;
    top = a2->top;
    v13[0] = a2->left;
    v10 = bottom;
    right = a2->right;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v4,
      byte_1807C5682,
      0LL,
      v5,
      (__int64)v13,
      (__int64)&top,
      (__int64)&right,
      (__int64)&v10);
  }
  if ( !*((_QWORD *)this + 10) )
  {
    v7 = -2147418113;
    v8 = 660LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v7 = CSingleViewShellExperience::SetPosition((CScreenClippingExperienceManager *)((char *)this + 56), a2);
  if ( v7 < 0 )
  {
    v8 = 661LL;
    goto LABEL_5;
  }
  return 0LL;
}
