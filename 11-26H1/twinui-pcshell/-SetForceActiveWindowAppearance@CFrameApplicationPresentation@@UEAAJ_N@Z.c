/*
 * XREFs of ?SetForceActiveWindowAppearance@CFrameApplicationPresentation@@UEAAJ_N@Z @ 0x180305B90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_be09023083cb68ae0d6884a72774a2ad___ @ 0x180303DC0 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_be09023083cb68ae0d6884a72774a2ad___.c)
 *     _lambda_be09023083cb68ae0d6884a72774a2ad_::_lambda_be09023083cb68ae0d6884a72774a2ad_ @ 0x180304470 (_lambda_be09023083cb68ae0d6884a72774a2ad_--_lambda_be09023083cb68ae0d6884a72774a2ad_.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetForceActiveWindowAppearance(
        CFrameApplicationPresentation *this,
        char a2)
{
  _BYTE *v2; // rax
  char v4; // r8
  char v5; // cl
  _DWORD *v6; // r9
  int v7; // eax
  unsigned int v8; // ebx
  int v10[4]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v11[24]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v13; // [rsp+58h] [rbp+10h] BYREF

  v2 = (char *)this + 567;
  v4 = 1;
  v5 = *((_BYTE *)this + 566) || *v2;
  *((_BYTE *)this + 566) = a2;
  if ( !a2 && !*v2 )
    v4 = 0;
  v13 = v4;
  if ( v4 == v5 )
    return 0LL;
  *(_OWORD *)v10 = *(_OWORD *)lambda_be09023083cb68ae0d6884a72774a2ad_::_lambda_be09023083cb68ae0d6884a72774a2ad_(
                                (__int64)v11,
                                (__int64)this,
                                &v13);
  v7 = CFrameApplicationPresentation::_AddTaskToQueue__lambda_be09023083cb68ae0d6884a72774a2ad___(v6, v10);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x757,
    (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
