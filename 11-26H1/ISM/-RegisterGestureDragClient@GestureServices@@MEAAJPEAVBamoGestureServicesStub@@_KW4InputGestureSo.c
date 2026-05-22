/*
 * XREFs of ?RegisterGestureDragClient@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@_KW4InputGestureSourceType@Input@Internal@UI@Windows@@W4InputType@4567@PEAVBamoDragManagerClientProxy@@@Z @ 0x18002F340
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterGestureSource@ShellGesturesProcessor@@QEAAX_KW4InputGestureSourceType@Input@Internal@UI@Windows@@W4InputType@3456@PEAVDragManagerClientProxy@@@Z @ 0x18002F3CC (-RegisterGestureSource@ShellGesturesProcessor@@QEAAX_KW4InputGestureSourceType@Input@Internal@UI.c)
 *     ?IsShellClient@GestureServices@@AEBA_NPEAVDragManagerClientProxy@@@Z @ 0x18002F510 (-IsShellClient@GestureServices@@AEBA_NPEAVDragManagerClientProxy@@@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18008F820 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?IsTestSigningEnabled@KernelContextProvider@@SA_NXZ @ 0x18010C6F4 (-IsTestSigningEnabled@KernelContextProvider@@SA_NXZ.c)
 */

__int64 __fastcall GestureServices::RegisterGestureDragClient(
        GestureServices *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        struct DragManagerClientProxy *a6)
{
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( GestureServices::IsShellClient(a1, a6) || KernelContextProvider::IsTestSigningEnabled() )
    ShellGesturesProcessor::RegisterGestureSource(*((_QWORD *)a1 + 10), a3, a4, a5, a6);
  else
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x201,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\g"
                    "estureservices.cpp",
      (const char *)0x80070005LL,
      v10);
  return 0LL;
}
