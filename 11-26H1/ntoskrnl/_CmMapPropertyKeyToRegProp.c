/*
 * XREFs of _CmMapPropertyKeyToRegProp @ 0x1409AF6BC
 * Callers:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1409AF618 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmMapPropertyKeyToRegProp(__int64 a1, __int64 a2)
{
  int v2; // edi
  unsigned int v3; // r8d
  DEVPROPKEY **v4; // r10
  unsigned int i; // r9d
  DEVPROPKEY *v7; // rbx
  DEVPROPKEY **v8; // rdx
  __int64 v10; // rcx

  v2 = *(_DWORD *)(a2 + 16);
  v3 = 0;
  v4 = &CmDeviceRegPropMap;
  for ( i = 0; i < 0x21; ++i )
  {
    v7 = *v4;
    v8 = &CmDeviceRegPropMap + 3 * i;
    if ( v2 == (*v4)->pid )
    {
      v10 = *(_QWORD *)a2 - *(_QWORD *)&v7->fmtid.Data1;
      if ( *(_QWORD *)a2 == *(_QWORD *)&v7->fmtid.Data1 )
        v10 = *(_QWORD *)(a2 + 8) - *(_QWORD *)v7->fmtid.Data4;
      if ( !v10 )
        break;
    }
    v4 += 3;
    v8 = 0LL;
  }
  if ( v8 )
    return *((unsigned int *)v8 + 3);
  return v3;
}
