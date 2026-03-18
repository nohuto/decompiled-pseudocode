/*
 * XREFs of ?_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z @ 0x140116D7C
 * Callers:
 *     NtCreateImplicitCompositionInputSink @ 0x140116D40 (NtCreateImplicitCompositionInputSink.c)
 *     NtCreateCompositionInputSink @ 0x140116D60 (NtCreateCompositionInputSink.c)
 * Callees:
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x14009B614 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAP.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 *     memset @ 0x140243000 (memset.c)
 *     RtlCopyToUser @ 0x1402C9008 (RtlCopyToUser.c)
 */

__int64 __fastcall _CreateCompositionInputSink(const struct COMPOSITION_INPUT_SINK *a1, int a2, void **a3)
{
  int CompositionInputSink; // ebx
  const struct COMPOSITION_INPUT_SINK *v7; // rdx
  _DWORD v9[2]; // [rsp+20h] [rbp-178h] BYREF
  HANDLE Handle[3]; // [rsp+28h] [rbp-170h] BYREF
  _DWORD v11[76]; // [rsp+40h] [rbp-158h] BYREF

  Handle[1] = a3;
  CompositionInputSink = 0;
  Handle[0] = (HANDLE)-1LL;
  memset(v11, 0, 0x128uLL);
  v9[0] = 0;
  if ( a1 )
  {
    v7 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v7 = (const struct COMPOSITION_INPUT_SINK *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v9, v7, 4uLL);
    if ( v9[0] >= 0x128u )
    {
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        a1 = (const struct COMPOSITION_INPUT_SINK *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v11, a1, 0x128uLL);
      if ( a2 )
        v11[72] |= 1u;
    }
    else
    {
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        a1 = (const struct COMPOSITION_INPUT_SINK *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v11, a1, 0xE8uLL);
      v11[58] = 0;
      v11[72] = a2 != 0;
    }
    v11[0] = 296;
  }
  else
  {
    CompositionInputSink = -1073741811;
  }
  if ( CompositionInputSink >= 0 )
    CompositionInputSink = CompositionInputObject::KernelCreateCompositionInputSink(
                             (const struct COMPOSITION_INPUT_SINK_V2 *)v11,
                             Handle);
  if ( a3 )
  {
    RtlCopyToUser(a3, Handle, 8uLL);
  }
  else
  {
    CompositionInputSink = -1073741811;
    v9[1] = -1073741811;
  }
  if ( CompositionInputSink < 0 && Handle[0] != (HANDLE)-1LL )
    NtClose(Handle[0]);
  return (unsigned int)CompositionInputSink;
}
