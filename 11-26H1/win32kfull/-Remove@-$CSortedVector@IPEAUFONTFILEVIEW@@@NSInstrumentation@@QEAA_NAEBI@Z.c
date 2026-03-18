/*
 * XREFs of ?Remove@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1400D2C78
 * Callers:
 *     FreeFileView @ 0x1400D3C10 (FreeFileView.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x140102C2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?GreMakeFontDir@@YAKKPEAEPEAG@Z @ 0x140226FB4 (-GreMakeFontDir@@YAKKPEAEPEAG@Z.c)
 * Callees:
 *     ?ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D2494 (-ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D24C0 (-AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?LowerBound@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEBA_KAEBI@Z @ 0x1400D28AC (-LowerBound@-$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEBA_KAEBI@Z.c)
 *     ?Wait@CPlatformSingleWaiterSignal@NSInstrumentation@@QEAAXXZ @ 0x14034E3B4 (-Wait@CPlatformSingleWaiterSignal@NSInstrumentation@@QEAAXXZ.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

char __fastcall NSInstrumentation::CSortedVector<unsigned int,FONTFILEVIEW *>::Remove(
        NSInstrumentation::CPlatformReaderWriterLock *this,
        unsigned int *a2)
{
  char v4; // di
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r8
  _DWORD *v7; // rcx

  NSInstrumentation::CPlatformReaderWriterLock::AcquireExclusive(this);
  v4 = 1;
  _InterlockedCompareExchange((volatile signed __int32 *)this + 4, 0, 1);
  _InterlockedAdd((volatile signed __int32 *)this + 7, 1u);
  if ( *((_DWORD *)this + 6) )
    NSInstrumentation::CPlatformSingleWaiterSignal::Wait((NSInstrumentation::CPlatformReaderWriterLock *)((char *)this + 8));
  v5 = NSInstrumentation::CSortedVector<unsigned int,FONTFILEVIEW *>::LowerBound((__int64)this, a2);
  v6 = *((_QWORD *)this + 5);
  if ( v6 && v5 < v6 && (v7 = (_DWORD *)(*((_QWORD *)this + 6) + 16 * v5), *v7 == *a2) )
  {
    memmove(v7, v7 + 4, 16 * (v6 - v5) - 16);
    --*((_QWORD *)this + 5);
  }
  else
  {
    v4 = 0;
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 7);
  NSInstrumentation::CPlatformReaderWriterLock::ReleaseExclusive(this);
  return v4;
}
