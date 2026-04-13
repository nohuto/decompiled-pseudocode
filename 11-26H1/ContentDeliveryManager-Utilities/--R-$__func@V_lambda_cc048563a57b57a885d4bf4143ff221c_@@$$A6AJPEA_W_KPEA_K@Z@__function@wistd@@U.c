/*
 * XREFs of ??R?$__func@V_lambda_cc048563a57b57a885d4bf4143ff221c_@@$$A6AJPEA_W_KPEA_K@Z@__function@wistd@@UEAAJ$$QEAPEA_W$$QEA_K$$QEAPEA_K@Z @ 0x1800A64F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func<_lambda_cc048563a57b57a885d4bf4143ff221c_,long (wchar_t *,unsigned __int64,unsigned __int64 *)>::operator()(
        __int64 a1,
        __int64 *a2,
        unsigned int *a3,
        _QWORD **a4)
{
  unsigned int v4; // eax
  unsigned int *v6; // rdx
  unsigned int v7; // ebx
  _QWORD *v8; // rcx
  _QWORD *v9; // rdi
  __int64 v10; // r8
  signed int LastError; // eax
  __int64 result; // rax
  unsigned int v13; // [rsp+30h] [rbp+8h] BYREF

  v4 = *a3;
  v6 = *(unsigned int **)(a1 + 16);
  v7 = 0;
  v8 = *(_QWORD **)(a1 + 8);
  v9 = *a4;
  v10 = *a2;
  v13 = v4;
  if ( !(unsigned int)GetStateFolder(*v8, *v6, v10, &v13) )
  {
    LastError = GetLastError();
    if ( LastError != 122 )
    {
      if ( LastError > 0 )
        v7 = (unsigned __int16)LastError | 0x80070000;
      else
        v7 = LastError;
    }
  }
  result = v7;
  *v9 = v13;
  return result;
}
