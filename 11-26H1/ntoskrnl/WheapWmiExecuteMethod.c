/*
 * XREFs of WheapWmiExecuteMethod @ 0x1406DC8E8
 * Callers:
 *     WheaWmiDispatch @ 0x1406DC190 (WheaWmiDispatch.c)
 * Callees:
 *     WheapWmiExecuteErrorInjectionMethod @ 0x1406DC2B0 (WheapWmiExecuteErrorInjectionMethod.c)
 *     WheapWmiExecuteErrorSourceMethod @ 0x1406DC4CC (WheapWmiExecuteErrorSourceMethod.c)
 *     WheapWmiExecutePluginCtlMethod @ 0x1406DCAE4 (WheapWmiExecutePluginCtlMethod.c)
 *     WheapWmiExecutePolicyManagementMethod @ 0x1406DCBD8 (WheapWmiExecutePolicyManagementMethod.c)
 *     WheaPageOfflineAndPersist @ 0x14084E5CC (WheaPageOfflineAndPersist.c)
 */

__int64 __fastcall WheapWmiExecuteMethod(__int64 *a1, unsigned int a2, int *a3, int *a4)
{
  __int64 v4; // rax
  unsigned int v6; // r10d
  unsigned int *v8; // rdi
  __int64 v10; // rax
  int v11; // r9d
  __int64 v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  unsigned int v17; // ecx
  __int64 v18; // rdx
  int v19; // esi
  unsigned int v20; // eax
  int v21; // edx
  __int64 result; // rax
  int v23; // [rsp+58h] [rbp+10h] BYREF

  v4 = (unsigned int)a3[15];
  v6 = a2 - v4;
  v23 = 0;
  v8 = (unsigned int *)((char *)a3 + v4);
  v10 = *a1;
  v11 = 0;
  v12 = *(_QWORD *)&WHEAErrorSourceMethods_GUID.Data1 - *a1;
  if ( *(_QWORD *)&WHEAErrorSourceMethods_GUID.Data1 == *a1 )
    v12 = *(_QWORD *)WHEAErrorSourceMethods_GUID.Data4 - a1[1];
  if ( !v12 )
  {
    v13 = WheapWmiExecuteErrorSourceMethod(a3[14], v6, v8, a3[16], (unsigned int *)&v23);
LABEL_17:
    v17 = v13;
    goto LABEL_31;
  }
  v14 = *(_QWORD *)&WHEAErrorInjectionMethods_GUID.Data1 - v10;
  if ( *(_QWORD *)&WHEAErrorInjectionMethods_GUID.Data1 == v10 )
    v14 = *(_QWORD *)WHEAErrorInjectionMethods_GUID.Data4 - a1[1];
  if ( !v14 )
  {
    v13 = WheapWmiExecuteErrorInjectionMethod(a3[14], v6, v8, a3[16], &v23);
    goto LABEL_17;
  }
  v15 = *(_QWORD *)&WHEAPolicyManagementMethods_GUID.Data1 - v10;
  if ( *(_QWORD *)&WHEAPolicyManagementMethods_GUID.Data1 == v10 )
    v15 = *(_QWORD *)WHEAPolicyManagementMethods_GUID.Data4 - a1[1];
  if ( !v15 )
  {
    v13 = WheapWmiExecutePolicyManagementMethod(a3[14], v6, (_DWORD)v8, a3[16], (__int64)&v23);
    goto LABEL_17;
  }
  v16 = WHEAPluginCtlMethods_GUID - v10;
  if ( WHEAPluginCtlMethods_GUID == v10 )
    v16 = 0xBDECAD15FC3BEF8FuLL - a1[1];
  if ( !v16 )
  {
    v13 = WheapWmiExecutePluginCtlMethod(a3[14], v6, (_DWORD)v8, 0, (__int64)&v23);
    goto LABEL_17;
  }
  v18 = WHEAPageOfflineMethods_GUID - v10;
  if ( WHEAPageOfflineMethods_GUID == v10 )
    v18 = 0x3D6C14B7685E59B4LL - a1[1];
  if ( v18 )
  {
    v17 = -1073741808;
    goto LABEL_37;
  }
  v19 = 0;
  if ( a3[14] == 1 )
  {
    if ( v6 >= 4 && v8 && *v8 >= 0x40 )
    {
      v19 = 4;
      v20 = WheaPageOfflineAndPersist(v8 + 1, 0LL, a3, 0LL);
      *v8 = v20;
      v17 = v20;
      if ( v20 == 259 )
        v17 = 0;
    }
    else
    {
      v17 = -1073741811;
    }
  }
  else
  {
    v17 = -1073741161;
  }
  v23 = v19;
LABEL_31:
  v21 = v23;
  v11 = v23 + a3[15];
  if ( v17 == -1073741789 )
  {
    if ( a2 < 0x38 )
    {
      v17 = -1073741789;
      v11 = 0;
    }
    else
    {
      a3[12] = v11;
      v17 = 0;
      v11 = 56;
      *a3 = 56;
      a3[11] = 32;
    }
  }
  else
  {
    *a3 = v11;
    a3[16] = v21;
  }
LABEL_37:
  result = v17;
  *a4 = v11;
  return result;
}
