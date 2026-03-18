/*
 * XREFs of ?CapturePointer@CInteractionMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@I@Z @ 0x140241F7C
 * Callers:
 *     ?CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z @ 0x14017E000 (-CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z.c)
 * Callees:
 *     ?Grow@?$CDynamicArray@I$0HHHAHDFF@@@IEAAJI@Z @ 0x140241FD0 (-Grow@-$CDynamicArray@I$0HHHAHDFF@@@IEAAJI@Z.c)
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::CapturePointer(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3)
{
  char *v3; // rbx
  __int64 result; // rax

  v3 = (char *)this + 280;
  result = CDynamicArray<unsigned int,2003858261>::Grow((char *)this + 280, a2);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(*(_QWORD *)v3 + 4LL * (unsigned int)(*((_DWORD *)v3 + 2))++) = a3;
    *((_DWORD *)this + 4) |= 0x80u;
  }
  return result;
}
