/*
 * XREFs of ?Open@RegistryKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x140160690
 * Callers:
 *     ?Open@ExecutionContextCpuKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x14014FFB0 (-Open@ExecutionContextCpuKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ?Open@InterfaceProfileKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x14015E360 (-Open@InterfaceProfileKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140069840 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 */

__int64 __fastcall RegistryKnobCollection::Open(RegistryKnobCollection *this, unsigned int a2, void **a3)
{
  unsigned int v6; // edi
  unsigned __int16 v8; // r9

  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    a3,
    0LL);
  v6 = IoOpenDriverRegistryKey(**((_QWORD **)this + 3), 2LL, a2, 0LL, a3);
  if ( v6 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = 10;
LABEL_10:
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        v8,
        (struct _GUID *)&WPP_5727a9fad38f371d27467642e4002c95_Traceguids,
        v6);
    }
  }
  else
  {
    if ( (a2 & 2) != 0
      || (wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
            a3 + 1,
            0LL),
          (v6 = IoOpenDriverRegistryKey(**((_QWORD **)this + 3), 0LL, a2, 0LL, a3 + 1)) == 0) )
    {
      *((_BYTE *)a3 + 16) = 1;
      return 0LL;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = 11;
      goto LABEL_10;
    }
  }
  return v6;
}
