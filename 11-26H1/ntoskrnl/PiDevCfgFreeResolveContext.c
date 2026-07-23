/*
 * XREFs of PiDevCfgFreeResolveContext @ 0x140A43410
 * Callers:
 *     PiDevCfgVerifyDeviceAllowed @ 0x140A42DFC (PiDevCfgVerifyDeviceAllowed.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x140A4321C (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgInitResolveContext @ 0x140A434A0 (PiDevCfgInitResolveContext.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     PiDevCfgFreeVariable @ 0x140A429C4 (PiDevCfgFreeVariable.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiDevCfgFreeResolveContext(__int64 a1)
{
  void *v2; // rcx
  unsigned int i; // ebx
  _QWORD **v4; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rdx

  if ( *(_QWORD *)(a1 + 24) )
  {
    for ( i = 0; i < 0x7F; ++i )
    {
      while ( 1 )
      {
        v4 = (_QWORD **)(*(_QWORD *)(a1 + 24) + 16LL * i);
        v5 = *v4;
        if ( *v4 == v4 )
          break;
        if ( (_QWORD **)v5[1] != v4 || (v6 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
          __fastfail(3u);
        *v4 = v6;
        v6[1] = v4;
        PiDevCfgFreeVariable(v5);
      }
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0);
  }
  v2 = *(void **)(a1 + 16);
  if ( v2 )
    ZwClose(v2);
}
