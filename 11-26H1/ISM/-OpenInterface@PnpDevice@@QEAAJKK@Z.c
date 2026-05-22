/*
 * XREFs of ?OpenInterface@PnpDevice@@QEAAJKK@Z @ 0x18008E00C
 * Callers:
 *     ?OpenInterface@PnpDevice@@QEAAJXZ @ 0x18008DFC8 (-OpenInterface@PnpDevice@@QEAAJXZ.c)
 *     ?Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800E7A9C (-Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateFileHandle@PnpDevice@@AEAAJKK@Z @ 0x1800E5AB4 (-CreateFileHandle@PnpDevice@@AEAAJKK@Z.c)
 */

__int64 __fastcall PnpDevice::OpenInterface(PnpDevice *this, DWORD a2)
{
  int FileHandle; // eax
  unsigned int v5; // edi
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 31) == 2 && *((_QWORD *)this + 4) )
  {
    if ( *((_QWORD *)this + 5) == -1LL )
    {
      FileHandle = PnpDevice::CreateFileHandle(this, a2, 3u);
      v5 = FileHandle;
      if ( FileHandle < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x189,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp",
          (const char *)(unsigned int)FileHandle,
          v7);
        return v5;
      }
      *((_DWORD *)this + 33) = a2;
      *((_DWORD *)this + 34) = 3;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x183,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp",
      (const char *)0x80004005LL,
      v7);
    return 2147500037LL;
  }
}
