/*
 * XREFs of ?NotifyPinned@CDxHandleYUVBitmapRealization@@UEAAXXZ @ 0x1802AF580
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0xqxt_EventWriteTransfer @ 0x1802AC3D4 (McTemplateU0xqxt_EventWriteTransfer.c)
 */

void __fastcall CDxHandleYUVBitmapRealization::NotifyPinned(CDxHandleYUVBitmapRealization *this)
{
  char *v1; // rbx

  v1 = (char *)this + 48;
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
    McTemplateU0xqxt_EventWriteTransfer(
      (__int64)this,
      (unsigned int)*((_QWORD *)this - 31),
      (unsigned int)*((_QWORD *)this - 31) | (unsigned __int64)((__int64)(int)HIDWORD(*((_QWORD *)this - 31)) << 32),
      *((_DWORD *)this - 23),
      *((_QWORD *)this - 9),
      *v1);
  *v1 = 1;
}
