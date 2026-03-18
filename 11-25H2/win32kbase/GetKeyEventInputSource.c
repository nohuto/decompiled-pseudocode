/*
 * XREFs of GetKeyEventInputSource @ 0x14018C4F4
 * Callers:
 *     xxxKeyEventEx @ 0x140150824 (xxxKeyEventEx.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline @ 0x1401A5360 (Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall GetKeyEventInputSource(int a1, __int16 a2, __int64 a3, _DWORD *a4)
{
  int v4; // edi
  bool v9; // si
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rbx
  bool v14; // zf
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx

  v4 = 1;
  *a4 = 1;
  v9 = 0;
  result = Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result )
  {
    if ( a2 == -3 )
      goto LABEL_14;
    if ( !a3 )
    {
      result = (__int64)PtiCurrent();
      v13 = *(_QWORD *)(result + 464);
      if ( *(int *)(v13 + 12) < 0 )
      {
LABEL_13:
        v9 = 1;
        goto LABEL_14;
      }
      result = W32GetUserGdiSessionState(v12);
      v14 = *(_QWORD *)v13 == *(_QWORD *)(result + 40);
      goto LABEL_12;
    }
LABEL_8:
    v9 = *(_DWORD *)(a3 + 12) != 0;
    goto LABEL_14;
  }
  if ( a2 == -3 )
    goto LABEL_14;
  if ( a3 )
    goto LABEL_8;
  if ( UIPrivilegeIsolation::fEnforceUIPI )
  {
    result = (__int64)PtiCurrent();
    v11 = *(_QWORD *)(result + 464);
    if ( *(int *)(v11 + 12) < 0 )
      goto LABEL_13;
  }
  v15 = *(_QWORD *)(W32GetUserGdiSessionState(v11) + 40);
  result = PsGetCurrentProcess(v17, v16);
  v14 = result == v15;
LABEL_12:
  if ( v14 )
    goto LABEL_13;
LABEL_14:
  if ( a1 )
  {
    if ( !v9 )
    {
      v4 = 4;
      result = 2LL;
      if ( a2 != -3 )
        v4 = 2;
    }
  }
  a4[1] = v4;
  return result;
}
