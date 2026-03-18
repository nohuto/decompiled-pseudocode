/*
 * XREFs of ?IsFontUnreliable@UmfdReliabilityManager@@YA_NUUMFD_RELIABILITY_KEY@@@Z @ 0x14015364C
 * Callers:
 *     ?CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140153400 (-CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 * Callees:
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400B2384 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400B23D4 (-AcquireShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x14012ADAC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x14017EE94 (_tlgKeywordOn.c)
 *     ?LowerBound@?$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@QEBA_KAEBK@Z @ 0x140340B68 (-LowerBound@-$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@Q.c)
 */

unsigned __int8 __fastcall UmfdReliabilityManager::IsFontUnreliable(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 SessionState; // rax
  unsigned __int8 v5; // bl
  NSInstrumentation::CPrioritizedWriterLock *v6; // rsi
  char v7; // bp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r11
  __int64 v11; // rax
  int v12; // [rsp+60h] [rbp+8h] BYREF
  int v13; // [rsp+68h] [rbp+10h]
  __int64 v14; // [rsp+70h] [rbp+18h]

  v3 = a1;
  SessionState = W32GetSessionState(a1, a2, a3);
  v5 = 0;
  v12 = v3;
  v6 = *(NSInstrumentation::CPrioritizedWriterLock **)(*(_QWORD *)(SessionState + 96) + 24296LL);
  NSInstrumentation::CPrioritizedWriterLock::AcquireShared(v6);
  if ( *((_QWORD *)v6 + 5)
    && (v9 = NSInstrumentation::CSortedVector<unsigned long,UmfdReliabilityManager::SFontReliabilityInfo>::LowerBound(
               v6,
               &v12),
        v9 < v10)
    && (v11 = *((_QWORD *)v6 + 6) + 8 * v9, *(_DWORD *)v11 == v3)
    && v11 )
  {
    v5 = *(_BYTE *)(v11 + 4);
    v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(v6);
  if ( !v7 )
    return 0;
  if ( (unsigned int)dword_14039BBC0 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_14039BBC0, 0x400000000000LL) )
    {
      v12 = v5;
      v13 = v3;
      v14 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_14039BBC0,
        (__int64)&unk_14036C480);
    }
  }
  return v5;
}
