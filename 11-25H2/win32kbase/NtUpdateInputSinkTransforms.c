/*
 * XREFs of NtUpdateInputSinkTransforms @ 0x1400F1110
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x14004E260 (UserIsCurrentProcessDwm.c)
 *     ?UpdateTransform@CompositionInputObject@@QEAAJAEBUtagINPUT_TRANSFORM@@@Z @ 0x1400652D8 (-UpdateTransform@CompositionInputObject@@QEAAJAEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x140068B20 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?UpdateTransform@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@PEAXAEBUtagINPUT_TRANSFORM@@@Z @ 0x14010AF44 (-UpdateTransform@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@PEAXAEBUtagINPUT_TR.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall NtUpdateInputSinkTransforms(char *a1, __int64 a2)
{
  unsigned int v2; // r14d
  int v4; // edi
  __int64 i; // rsi
  PVOID Object[12]; // [rsp+20h] [rbp-C8h] BYREF
  _OWORD v8[6]; // [rsp+80h] [rbp-68h] BYREF

  v2 = a2;
  Object[1] = a1;
  if ( UserIsCurrentProcessDwm((__int64)a1, a2) )
  {
    v4 = 0;
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      LODWORD(Object[0]) = i;
      if ( v4 < 0 || (unsigned int)i >= v2 )
        break;
      memset(&Object[2], 0, 0x48uLL);
      memset(v8, 0, 0x48uLL);
      RtlCopyFromUser(v8, &a1[72 * i], 0x48uLL);
      *(_OWORD *)&Object[2] = v8[0];
      *(_OWORD *)&Object[4] = v8[1];
      *(_OWORD *)&Object[6] = v8[2];
      *(_OWORD *)&Object[8] = v8[3];
      Object[10] = *(PVOID *)&v8[4];
      Object[0] = 0LL;
      v4 = CompositionInputObject::ResolveHandle(Object[2], 2u, 1, (struct CompositionInputObject **)Object);
      if ( v4 >= 0 )
      {
        CompositionInputObject::UpdateTransform((char *)Object[0], (const struct tagINPUT_TRANSFORM *)&Object[3]);
        InputTraceLogging::InputSink::UpdateTransform(
          (const struct CompositionInputObject *)Object[0],
          Object[2],
          (const struct tagINPUT_TRANSFORM *)&Object[3]);
        ObfDereferenceObject(Object[0]);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v4;
}
