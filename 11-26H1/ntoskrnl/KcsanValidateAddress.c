/*
 * XREFs of KcsanValidateAddress @ 0x1405E31F0
 * Callers:
 *     __asan_load1 @ 0x1405DDF40 (__asan_load1.c)
 *     __asan_load16 @ 0x1405DE000 (__asan_load16.c)
 *     __asan_load16_volatile @ 0x1405DE510 (__asan_load16_volatile.c)
 *     __asan_load1_volatile @ 0x1405DE850 (__asan_load1_volatile.c)
 *     __asan_load2 @ 0x1405DE910 (__asan_load2.c)
 *     __asan_load2_volatile @ 0x1405DEB20 (__asan_load2_volatile.c)
 *     __asan_load4 @ 0x1405DEC40 (__asan_load4.c)
 *     __asan_load4_volatile @ 0x1405DEEE0 (__asan_load4_volatile.c)
 *     __asan_load8 @ 0x1405DF050 (__asan_load8.c)
 *     __asan_load8_volatile @ 0x1405DF370 (__asan_load8_volatile.c)
 *     __asan_loadN @ 0x1405DF510 (__asan_loadN.c)
 *     __asan_loadN_volatile @ 0x1405DF6E0 (__asan_loadN_volatile.c)
 *     __asan_memcpy @ 0x1405DF7E0 (__asan_memcpy.c)
 *     __asan_memset @ 0x1405DF9F0 (__asan_memset.c)
 *     __asan_store1 @ 0x1405DFDE0 (__asan_store1.c)
 *     __asan_store16 @ 0x1405DFEA0 (__asan_store16.c)
 *     __asan_store16_volatile @ 0x1405E03B0 (__asan_store16_volatile.c)
 *     __asan_store1_volatile @ 0x1405E06F0 (__asan_store1_volatile.c)
 *     __asan_store2 @ 0x1405E07B0 (__asan_store2.c)
 *     __asan_store2_volatile @ 0x1405E09C0 (__asan_store2_volatile.c)
 *     __asan_store4 @ 0x1405E0AE0 (__asan_store4.c)
 *     __asan_store4_volatile @ 0x1405E0D80 (__asan_store4_volatile.c)
 *     __asan_store8 @ 0x1405E0EF0 (__asan_store8.c)
 *     __asan_store8_volatile @ 0x1405E1210 (__asan_store8_volatile.c)
 *     __asan_storeN @ 0x1405E13C0 (__asan_storeN.c)
 *     __asan_storeN_volatile @ 0x1405E1590 (__asan_storeN_volatile.c)
 *     __asan_wrap_memchr @ 0x1405E1690 (__asan_wrap_memchr.c)
 *     __asan_wrap_memcmp @ 0x1405E17C0 (__asan_wrap_memcmp.c)
 *     __asan_wrap_strcat @ 0x1405E19D0 (__asan_wrap_strcat.c)
 *     __asan_wrap_strcmp @ 0x1405E1CC0 (__asan_wrap_strcmp.c)
 *     __asan_wrap_strcpy @ 0x1405E1EC0 (__asan_wrap_strcpy.c)
 *     __asan_wrap_strlen @ 0x1405E20D0 (__asan_wrap_strlen.c)
 *     __asan_wrap_strncmp @ 0x1405E21F0 (__asan_wrap_strncmp.c)
 *     __asan_wrap_strncpy @ 0x1405E23E0 (__asan_wrap_strncpy.c)
 *     __asan_wrap_wcscat @ 0x1405E25F0 (__asan_wrap_wcscat.c)
 *     __asan_wrap_wcscpy @ 0x1405E29C0 (__asan_wrap_wcscpy.c)
 *     __asan_wrap_wcslen @ 0x1405E2C40 (__asan_wrap_wcslen.c)
 *     __asan_wrap_wcsncpy @ 0x1405E2DD0 (__asan_wrap_wcsncpy.c)
 *     KasanUmaCopyFromUser @ 0x14071EF20 (KasanUmaCopyFromUser.c)
 *     KasanUmaCopyFromUserNonTemporal @ 0x14071F050 (KasanUmaCopyFromUserNonTemporal.c)
 *     KasanUmaCopyToUser @ 0x14071F180 (KasanUmaCopyToUser.c)
 *     KasanUmaCopyToUserNonTemporal @ 0x14071F2B0 (KasanUmaCopyToUserNonTemporal.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x14037BEF0 (KeStallExecutionProcessor.c)
 *     KcsaniReport @ 0x1405E34A0 (KcsaniReport.c)
 */

void __fastcall KcsanValidateAddress(unsigned __int64 a1, __int64 a2, char a3, int a4, __int64 a5)
{
  unsigned __int64 v7; // rcx
  unsigned __int64 *v8; // rax
  bool v9; // r11
  unsigned __int64 v10; // r9
  int *p_SchedulerAssistPriorityFloor; // rdx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  unsigned __int64 KcsanThread; // rcx
  unsigned __int64 v15; // kr00_8
  __int128 v16; // xmm1
  unsigned int *v17; // rdi
  unsigned __int64 v18; // rax
  signed __int32 v19[8]; // [rsp+0h] [rbp-20h] BYREF
  unsigned __int64 v20; // [rsp+20h] [rbp+0h]
  _OWORD v21[3]; // [rsp+28h] [rbp+8h] BYREF
  _OWORD v22[3]; // [rsp+58h] [rbp+38h] BYREF

  memset(v22, 0, sizeof(v22));
  memset(v21, 0, sizeof(v21));
  if ( a4 != 2 && *(_BYTE *)(((a1 + 0x800000000000LL) >> 3) + KasaniShadow) != 8 )
  {
    v7 = 0LL;
    if ( *(_QWORD *)qword_140FC7BF0 )
    {
      v8 = (unsigned __int64 *)(qword_140FC7BF0 + 8);
      do
      {
        if ( a1 < *v8 )
          break;
        if ( a1 < v8[1] )
          return;
        ++v7;
        v8 += 2;
      }
      while ( v7 < *(_QWORD *)qword_140FC7BF0 );
    }
    *(_QWORD *)&v22[2] = a5;
    v9 = a4 == 1;
    v10 = 0LL;
    *((_QWORD *)&v22[0] + 1) = a1;
    *(_QWORD *)&v22[1] = a2;
    BYTE8(v22[1]) = a3;
    BYTE9(v22[1]) = v9;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      p_SchedulerAssistPriorityFloor = &stru_140E3E928.SchedulerAssistPriorityFloor;
      do
      {
        *(_QWORD *)&v21[0] = *((_QWORD *)p_SchedulerAssistPriorityFloor - 5);
        if ( LODWORD(v21[0]) == -1395763731 )
        {
          v12 = *((_OWORD *)p_SchedulerAssistPriorityFloor - 2);
          v13 = *((_OWORD *)p_SchedulerAssistPriorityFloor - 1);
          *((_QWORD *)&v21[2] + 1) = *(_QWORD *)p_SchedulerAssistPriorityFloor;
          *(_OWORD *)((char *)v21 + 8) = v12;
          *(_OWORD *)((char *)&v21[1] + 8) = v13;
          if ( __PAIR64__(DWORD1(v21[0]), -1395763731) == *((_QWORD *)&v21[2] + 1)
            && *((_QWORD *)&v21[0] + 1) + *(_QWORD *)&v21[1] > a1
            && a1 + a2 > *((_QWORD *)&v21[0] + 1)
            && (a3 || BYTE8(v21[1]))
            && (!v9 || !BYTE9(v21[1])) )
          {
            KcsaniReport(v22, v21);
          }
        }
        ++v10;
        p_SchedulerAssistPriorityFloor += 16;
      }
      while ( v10 < (unsigned int)KeNumberProcessors_0 );
    }
    KcsanThread = KeGetCurrentThread()->KcsanThread;
    HIDWORD(v20) = HIDWORD(KcsanThread) + 1;
    LODWORD(v20) = ((_WORD)KcsanThread + 1) & 0x3FF;
    KeGetCurrentThread()->KcsanThread = v20;
    if ( (((_WORD)KcsanThread + 1) & 0x3FF) == 0 && !_interlockedbittestandset(&KeGetCurrentThread()->ThreadFlags2, 0) )
    {
      v15 = __readeflags();
      _disable();
      LODWORD(v20) = -1395763731;
      v16 = *(_OWORD *)((char *)&v22[1] + 8);
      v17 = &stru_140E3E928.ReservedPreviousReadyTimeValue + 16 * (unsigned __int64)KeGetCurrentPrcb()->Number;
      HIDWORD(v20) = HIDWORD(KcsanThread) + 1;
      *(_OWORD *)(v17 + 2) = *(_OWORD *)((char *)v22 + 8);
      v18 = v20;
      *(_OWORD *)(v17 + 6) = v16;
      *(_QWORD *)v17 = v18;
      *((_QWORD *)v17 + 5) = v20;
      _InterlockedOr(v19, 0);
      KeStallExecutionProcessor(0xAu);
      *(_QWORD *)v17 = 0LL;
      *((_QWORD *)v17 + 5) = 0LL;
      *(_OWORD *)(v17 + 2) = 0LL;
      *(_OWORD *)(v17 + 6) = 0LL;
      _InterlockedOr(v19, 0);
      __writeeflags(v15);
      _interlockedbittestandreset(&KeGetCurrentThread()->ThreadFlags2, 0);
    }
  }
}
