/*
 * XREFs of ?_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z @ 0x1400597AC
 * Callers:
 *     NtCreateCompositionInputSink @ 0x140059790 (NtCreateCompositionInputSink.c)
 *     NtCreateImplicitCompositionInputSink @ 0x14017ECD0 (NtCreateImplicitCompositionInputSink.c)
 * Callees:
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x140058A80 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAP.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 */

__int64 __fastcall _CreateCompositionInputSink(const struct COMPOSITION_INPUT_SINK *Src, int a2, void **a3)
{
  int CompositionInputSink; // ebx
  _DWORD v8[2]; // [rsp+20h] [rbp-178h] BYREF
  HANDLE Handle[3]; // [rsp+28h] [rbp-170h] BYREF
  _DWORD v10[76]; // [rsp+40h] [rbp-158h] BYREF

  Handle[1] = a3;
  CompositionInputSink = 0;
  Handle[0] = (HANDLE)-1LL;
  memset(v10, 0, 0x128uLL);
  v8[0] = 0;
  if ( Src )
  {
    RtlCopyFromUser(v8, Src, 4uLL);
    if ( v8[0] < 0x128u )
    {
      RtlCopyFromUser(v10, Src, 0xE8uLL);
      v10[58] = 0;
      v10[72] = a2 != 0;
    }
    else
    {
      RtlCopyFromUser(v10, Src, 0x128uLL);
      if ( a2 )
        v10[72] |= 1u;
    }
    v10[0] = 296;
  }
  else
  {
    CompositionInputSink = -1073741811;
  }
  if ( CompositionInputSink >= 0 )
    CompositionInputSink = CompositionInputObject::KernelCreateCompositionInputSink(
                             (const struct COMPOSITION_INPUT_SINK_V2 *)v10,
                             Handle);
  if ( a3 )
  {
    RtlCopyToUser(a3, Handle, 8uLL);
  }
  else
  {
    CompositionInputSink = -1073741811;
    v8[1] = -1073741811;
  }
  if ( CompositionInputSink < 0 && Handle[0] != (HANDLE)-1LL )
    NtClose(Handle[0]);
  return (unsigned int)CompositionInputSink;
}
