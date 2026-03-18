/*
 * XREFs of PiDevCfgFreeResolveContext @ 0x140988CE4
 * Callers:
 *     PiDevCfgVerifyDeviceAllowed @ 0x1409886D0 (PiDevCfgVerifyDeviceAllowed.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x140988AF0 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgInitResolveContext @ 0x140988D74 (PiDevCfgInitResolveContext.c)
 * Callees:
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     PiDevCfgFreeVariable @ 0x140988298 (PiDevCfgFreeVariable.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiDevCfgFreeResolveContext(__int64 a1)
{
  void *v2; // rcx
  unsigned int i; // ebx
  UNICODE_STRING **v4; // rax
  UNICODE_STRING *v5; // rcx
  UNICODE_STRING *v6; // rdx

  if ( *(_QWORD *)(a1 + 24) )
  {
    for ( i = 0; i < 0x7F; ++i )
    {
      while ( 1 )
      {
        v4 = (UNICODE_STRING **)(*(_QWORD *)(a1 + 24) + 16LL * i);
        v5 = *v4;
        if ( *v4 == (UNICODE_STRING *)v4 )
          break;
        if ( (UNICODE_STRING **)v5->Buffer != v4
          || (v6 = *(UNICODE_STRING **)&v5->Length, *(UNICODE_STRING **)(*(_QWORD *)&v5->Length + 8LL) != v5) )
        {
          __fastfail(3u);
        }
        *v4 = v6;
        v6->Buffer = (wchar_t *)v4;
        PiDevCfgFreeVariable(v5);
      }
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0);
  }
  v2 = *(void **)(a1 + 16);
  if ( v2 )
    ZwClose(v2);
}
