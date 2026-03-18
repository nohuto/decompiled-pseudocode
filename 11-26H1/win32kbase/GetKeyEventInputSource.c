/*
 * XREFs of GetKeyEventInputSource @ 0x140122C10
 * Callers:
 *     xxxKeyEventEx @ 0x140123104 (xxxKeyEventEx.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x1401CAC9C (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall GetKeyEventInputSource(int a1, __int16 a2, __int64 a3, _DWORD *a4)
{
  int v4; // edi
  bool v9; // si
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rbx
  bool v15; // zf
  __int64 v16; // rbx
  __int64 v17; // rcx

  v4 = 1;
  *a4 = 1;
  v9 = 0;
  result = Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result )
  {
    if ( a2 == -3 )
      goto LABEL_14;
    if ( !a3 )
    {
      result = (__int64)PtiCurrent(v12, v11);
      v14 = *(_QWORD *)(result + 456);
      if ( *(int *)(v14 + 12) < 0 )
      {
LABEL_13:
        v9 = 1;
        goto LABEL_14;
      }
      result = W32GetUserGdiSessionState(v13);
      v15 = *(_QWORD *)v14 == *(_QWORD *)(result + 40);
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
    result = (__int64)PtiCurrent(v12, v11);
    v12 = *(_QWORD *)(result + 456);
    if ( *(int *)(v12 + 12) < 0 )
      goto LABEL_13;
  }
  v16 = *(_QWORD *)(W32GetUserGdiSessionState(v12) + 40);
  result = PsGetCurrentProcess(v17);
  v15 = result == v16;
LABEL_12:
  if ( v15 )
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
