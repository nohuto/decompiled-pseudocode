/*
 * XREFs of GreValidateVisrgn @ 0x1400473D4
 * Callers:
 *     GreCreateDisplayDC @ 0x140041200 (GreCreateDisplayDC.c)
 *     ReleaseCacheDC @ 0x140046EA0 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1400A2500 (_GetDCEx.c)
 * Callees:
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x140011FD0 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140065280 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x14008B5C0 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x14008B640 (--1DCOBJA@@QEAA@XZ.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1401C629C (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1401C65FC (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1401D07C0 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall GreValidateVisrgn(HDC a1, int a2)
{
  int v3; // eax
  int v4; // ecx
  unsigned int v5; // eax
  bool v6; // bl
  __int64 v7; // [rsp+20h] [rbp-39h] BYREF
  char v8; // [rsp+28h] [rbp-31h]
  __int64 v9; // [rsp+30h] [rbp-29h]
  char v10; // [rsp+38h] [rbp-21h]
  DC *v11[10]; // [rsp+40h] [rbp-19h] BYREF
  struct _RECTL v12; // [rsp+90h] [rbp+37h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v11, a1);
  if ( v11[0] )
  {
    v3 = *((_DWORD *)v11[0] + 9);
    v4 = v3 | 0x100000;
    v5 = v3 & 0xFFEFFFFF;
    if ( !a2 )
      v4 = v5;
    *((_DWORD *)v11[0] + 9) = v4;
    DC::AcquireDcVisRgnShared(v11[0]);
    v6 = GrepValidateVisRgn(v11[0], *((struct REGION **)v11[0] + 142), (struct ERECTL *)&v12);
    if ( v8 )
      CPushLock::ReleaseLock((CPushLock *)(v7 + 1112));
    if ( !v6 )
    {
      DC::AcquireDcVisRgnExclusive(v11[0]);
      v7 = *((_QWORD *)v11[0] + 142);
      if ( v7 )
        RGNOBJ::vSet((RGNOBJ *)&v7, &v12);
      if ( v10 )
        CPushLock::ReleaseLock((CPushLock *)(v9 + 1112));
    }
  }
  DCOBJA::~DCOBJA((DCOBJA *)v11);
}
