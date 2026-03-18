/*
 * XREFs of ?NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ @ 0x140034DE8
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x140032CC4 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x140034EC0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1400417C8 (McTemplateK0_EtwWriteTransfer.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyOnFlip(VIDMM_GLOBAL *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  unsigned int v5; // edx

  v4 = *((unsigned int *)this + 1964);
  if ( *((_QWORD *)this + 981) > (unsigned __int64)qword_14008A460 )
  {
    v5 = v4 + dword_14008A46C;
    *((_DWORD *)this + 1964) = v4 + dword_14008A46C;
    if ( v5 > dword_14008A468
      && MEMORY[0xFFFFF78000000014] - *((_QWORD *)this + 983) > (unsigned __int64)qword_14008A470 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 1) != 0 )
        McTemplateK0_EtwWriteTransfer(v4, &Dxgk_ExcessiveMemoryTransfer);
      *((_QWORD *)this + 983) = MEMORY[0xFFFFF78000000014];
      *((_DWORD *)this + 1964) = 0;
      if ( (byte_14008A201 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v4, &EventPerformanceWarning, a3, 5);
    }
  }
  else if ( (_DWORD)v4 )
  {
    *((_DWORD *)this + 1964) = v4 - 1;
  }
  _InterlockedExchange64((volatile __int64 *)this + 981, 0LL);
}
