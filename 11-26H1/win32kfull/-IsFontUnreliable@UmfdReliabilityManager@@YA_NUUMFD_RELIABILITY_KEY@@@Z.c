/*
 * XREFs of ?IsFontUnreliable@UmfdReliabilityManager@@YA_NUUMFD_RELIABILITY_KEY@@@Z @ 0x1401F8A34
 * Callers:
 *     ?CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140285B50 (-CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x140090B44 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400C2AE0 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400C2B30 (-AcquireShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 *     ?LowerBound@?$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@QEBA_KAEBK@Z @ 0x14034E120 (-LowerBound@-$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@Q.c)
 */

unsigned __int8 __fastcall UmfdReliabilityManager::IsFontUnreliable(int a1, __int64 a2)
{
  __int64 SessionState; // rax
  unsigned __int8 v4; // bl
  NSInstrumentation::CPrioritizedWriterLock *v5; // rsi
  char v6; // bp
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r11
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // [rsp+60h] [rbp+8h] BYREF
  int v14; // [rsp+68h] [rbp+10h] BYREF
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  SessionState = W32GetSessionState(a1, a2);
  v4 = 0;
  v13 = a1;
  v5 = *(NSInstrumentation::CPrioritizedWriterLock **)(*(_QWORD *)(SessionState + 96) + 24280LL);
  NSInstrumentation::CPrioritizedWriterLock::AcquireShared(v5);
  if ( *((_QWORD *)v5 + 5)
    && (v8 = NSInstrumentation::CSortedVector<unsigned long,UmfdReliabilityManager::SFontReliabilityInfo>::LowerBound(
               v5,
               &v13),
        v8 < v9)
    && (v10 = *((_QWORD *)v5 + 6) + 8 * v8, *(_DWORD *)v10 == a1)
    && v10 )
  {
    v4 = *(_BYTE *)(v10 + 4);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(v5);
  if ( !v6 )
    return 0;
  if ( (unsigned int)dword_1403AAA30 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1403AAA30, 0x400000000000LL) )
    {
      v13 = v4;
      v14 = a1;
      v15 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1403AAA30,
        (__int64)&unk_14037B012,
        v11,
        v12,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13);
    }
  }
  return v4;
}
