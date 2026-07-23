/*
 * XREFs of PiDevCfgClearDeviceDrivers @ 0x1407AC044
 * Callers:
 *     PiDevCfgFindDeviceDriver @ 0x140AE6D34 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgFreeDeviceContext @ 0x140AE836C (PiDevCfgFreeDeviceContext.c)
 * Callees:
 *     PiDevCfgFreeDriverNode @ 0x140AE6B84 (PiDevCfgFreeDriverNode.c)
 */

void __fastcall PiDevCfgClearDeviceDrivers(__int64 a1)
{
  _QWORD **v1; // rbx
  _QWORD *v2; // rcx
  _QWORD *v3; // rax

  v1 = (_QWORD **)(a1 + 24);
  if ( *(_QWORD *)(a1 + 24) )
  {
    while ( 1 )
    {
      v2 = *v1;
      if ( *v1 == v1 )
        break;
      if ( (_QWORD **)v2[1] != v1 || (v3 = (_QWORD *)*v2, *(_QWORD **)(*v2 + 8LL) != v2) )
        __fastfail(3u);
      *v1 = v3;
      v3[1] = v1;
      PiDevCfgFreeDriverNode();
    }
  }
}
