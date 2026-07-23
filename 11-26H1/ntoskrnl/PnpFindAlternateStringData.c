/*
 * XREFs of PnpFindAlternateStringData @ 0x140AA4B50
 * Callers:
 *     PiGetDeviceRegistryProperty @ 0x1407A2E2C (PiGetDeviceRegistryProperty.c)
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 *     PiAuditDeviceOperation @ 0x140B15BF8 (PiAuditDeviceOperation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpFindAlternateStringData(_WORD *a1, unsigned int a2, _QWORD *a3, _DWORD *a4)
{
  int v5; // r10d
  __int64 result; // rax
  int v7; // ebx
  __int16 *v8; // rdi
  __int16 *v9; // rcx
  __int16 *i; // rdx
  __int16 v11; // ax
  __int16 v12; // ax
  _WORD *v13; // rcx

  v5 = (int)a1;
  if ( a2 > 2 && *a1 == 64 )
  {
    v7 = 0;
    v8 = &a1[(unsigned __int64)a2 >> 1];
    v9 = a1 + 1;
    for ( i = v9 + 1; i < v8; ++i )
    {
      v11 = *v9;
      if ( !*v9 )
        break;
      if ( v11 == 44 )
      {
        v12 = *i;
        if ( *i != 37 && v12 != 45 && v12 != 35 )
          return 0LL;
        v7 = 1;
      }
      else if ( v11 == 59 )
      {
        if ( !v7 )
          return 0LL;
        v13 = v9 + 1;
        result = 1LL;
        *a3 = v13;
        *a4 = a2 + v5 - (_DWORD)v13;
        return result;
      }
      ++v9;
    }
  }
  return 0LL;
}
