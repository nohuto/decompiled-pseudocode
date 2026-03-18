/*
 * XREFs of ?VSyncTelemetryBucket@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1400702B8
 * Callers:
 *     ?VSyncTelemetryTimerDpc@ADAPTER_DISPLAY@@SAXPEAU_KDPC@@PEAX11@Z @ 0x140070660 (-VSyncTelemetryTimerDpc@ADAPTER_DISPLAY@@SAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U2@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U_tlgWrapperBinary@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@44AEBU?$_tlgWrapperByVal@$03@@555AEBU_tlgWrapperBinary@@6@Z @ 0x140002460 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U2@U2@U-$_tlgWrapperByVal@$03@@U3@U3@.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

void __fastcall ADAPTER_DISPLAY::VSyncTelemetryBucket(ADAPTER_DISPLAY *this)
{
  unsigned __int64 v2; // rsi
  char v3; // r10
  _DWORD *v4; // rdx
  char *v5; // rdi
  int v6; // r11d
  int v7; // r8d
  __int64 v8; // r11
  int v9; // ecx
  __int64 v10; // rdx
  unsigned int v11; // r10d
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // r11d
  __int64 v15; // rcx
  __int16 v16; // ax
  int v17; // eax
  void *v18; // rcx
  void *v19; // rcx
  int v20; // [rsp+70h] [rbp-29h] BYREF
  int v21; // [rsp+74h] [rbp-25h] BYREF
  int v22; // [rsp+78h] [rbp-21h] BYREF
  __int64 v23; // [rsp+80h] [rbp-19h] BYREF
  __int64 v24; // [rsp+88h] [rbp-11h] BYREF
  __int16 v25; // [rsp+90h] [rbp-9h]
  __int64 v26; // [rsp+98h] [rbp-1h] BYREF
  __int16 v27; // [rsp+A0h] [rbp+7h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp+Fh] BYREF
  __int16 v29; // [rsp+100h] [rbp+67h] BYREF
  __int16 v30; // [rsp+108h] [rbp+6Fh] BYREF
  __int16 v31; // [rsp+110h] [rbp+77h] BYREF
  int v32; // [rsp+118h] [rbp+7Fh] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*((_QWORD *)this + 2) + 4432LL), &LockHandle);
  if ( ++*((_DWORD *)this + 186) >= 0x384u || (v3 = 0, (unsigned int)(v2 - *((_DWORD *)this + 187)) > 0xE10) )
    v3 = 1;
  v4 = (_DWORD *)*((_QWORD *)this + 129);
  v5 = (char *)this + 80;
  if ( v4 )
  {
    v6 = *((_DWORD *)this + 248);
    v7 = *((_DWORD *)this + 246);
    if ( v6 == v7 )
    {
      if ( !*((_DWORD *)this + 240) )
      {
LABEL_14:
        v5 = (char *)this + 80;
        goto LABEL_15;
      }
      if ( !v7 )
      {
        *v4 &= 0xFC03FFFF;
        **((_DWORD **)this + 129) ^= (*((_DWORD *)this + 186) ^ **((_DWORD **)this + 129)) & 0x3FFFF;
        *((_DWORD *)this + 247) = 1;
        goto LABEL_14;
      }
      v8 = *((unsigned int *)this + 247);
      v9 = v4[(unsigned int)(v8 - 1)];
      if ( (v9 & 0x3FC0000) == 0 )
      {
        v4[(unsigned int)(v8 - 1)] = v9 ^ (v9 ^ (v9 + 1)) & 0x3FFFF;
        goto LABEL_14;
      }
      v4[v8] &= 0xFC03FFFF;
      *(_DWORD *)(*((_QWORD *)this + 129) + 4LL * *((unsigned int *)this + 247)) = *(_DWORD *)(*((_QWORD *)this + 129)
                                                                                             + 4LL
                                                                                             * *((unsigned int *)this
                                                                                               + 247)) & 0xFFFC0000 | 1;
    }
    else
    {
      v4[*((unsigned int *)this + 247)] ^= (v4[*((unsigned int *)this + 247)] ^ ((v7 - v6) << 18)) & 0x3FC0000;
      *(_DWORD *)(*((_QWORD *)this + 129) + 4LL * *((unsigned int *)this + 247)) ^= (*((_DWORD *)this + 249) ^ *(_DWORD *)(*((_QWORD *)this + 129) + 4LL * *((unsigned int *)this + 247))) & 0x3FFFF;
      *((_QWORD *)this + 124) = *((unsigned int *)this + 246);
    }
    ++*((_DWORD *)this + 247);
    goto LABEL_14;
  }
LABEL_15:
  if ( !v3 )
    goto LABEL_33;
  if ( *((_DWORD *)this + 246) )
    goto LABEL_19;
  if ( *((_DWORD *)this + 245) )
  {
    v5 = (char *)this + 80;
LABEL_19:
    if ( (unsigned int)dword_1401665F0 > 4 && tlgKeywordOn((__int64)&dword_1401665F0, 0x400000002000LL) )
    {
      if ( v11 > 5 && tlgKeywordOn((__int64)&dword_1401665F0, v10) )
      {
        v15 = *((_QWORD *)this + 129);
        if ( v15 )
          v16 = 4 * *((_WORD *)this + 494);
        else
          v16 = 0;
        v25 = v16;
        v26 = *((_QWORD *)this + 128);
        v24 = v15;
        v21 = v14;
        v30 = 1;
        v27 = v26 != 0 ? 0x180 : 0;
        v17 = 2 * *((_DWORD *)this + 250);
        v23 = 0x1000000LL;
        v32 = v17;
        v20 = *((_DWORD *)this + 245);
        v22 = v2 - *((_DWORD *)this + 187);
        v29 = *((_WORD *)this + 486);
        v31 = 2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperBinary>(
          v15,
          (__int64)&unk_1401416E0,
          v12,
          v13,
          (__int64)&v23,
          (__int64)&v31,
          (__int64)&v30,
          (__int64)&v29,
          (__int64)&v22,
          (__int64)&v21,
          (__int64)&v20,
          (__int64)&v32,
          &v26,
          &v24);
      }
      v5 = (char *)this + 80;
    }
  }
  v18 = (void *)*((_QWORD *)this + 128);
  if ( v18 )
    memset(v18, 0, 0x180uLL);
  v19 = (void *)*((_QWORD *)this + 129);
  if ( v19 )
    memset(v19, 0, 4LL * *((unsigned int *)v5 + 227));
  ++*((_DWORD *)v5 + 223);
  *(_QWORD *)(v5 + 900) = 0LL;
  *(_QWORD *)(v5 + 908) = 0LL;
  *((_DWORD *)this + 186) = 0;
  *((_DWORD *)this + 187) = v2;
LABEL_33:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
