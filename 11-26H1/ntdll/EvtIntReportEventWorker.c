/*
 * XREFs of EvtIntReportEventWorker @ 0x1800E5CD0
 * Callers:
 *     EvtIntReportEventAndSourceAsync @ 0x1800E5C60 (EvtIntReportEventAndSourceAsync.c)
 *     EvtIntReportAuthzEventAndSourceAsync @ 0x180126450 (EvtIntReportAuthzEventAndSourceAsync.c)
 * Callees:
 *     RtlValidSid @ 0x1800276B0 (RtlValidSid.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlSetLastWin32Error @ 0x180040B90 (RtlSetLastWin32Error.c)
 *     EtwpEventWriteFull @ 0x18005AAB0 (EtwpEventWriteFull.c)
 *     EtwWriteUMSecurityEvent @ 0x1800E6120 (EtwWriteUMSecurityEvent.c)
 *     _local_unwind @ 0x180127F80 (_local_unwind.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

_BOOL8 __fastcall EvtIntReportEventWorker(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        char a6,
        unsigned __int8 *Sid,
        unsigned __int16 a8,
        int a9,
        __int64 a10,
        __int64 a11)
{
  int v11; // esi
  _BYTE *Heap_0; // rdi
  unsigned __int8 v14; // r15
  unsigned __int8 *v15; // r12
  unsigned int v16; // ecx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // edx
  int v21; // eax
  __int64 v22; // rax
  int v23; // edx
  unsigned int v24; // r9d
  ULONG v25; // r8d
  __int64 v26; // r11
  __int64 v27; // rax
  int v28; // edx
  __int64 v29; // rcx
  LONG v30; // eax
  __int64 v32; // [rsp+0h] [rbp-2D8h] BYREF
  int v33; // [rsp+50h] [rbp-288h]
  LONG Win32Error; // [rsp+54h] [rbp-284h]
  int v35; // [rsp+58h] [rbp-280h] BYREF
  int v36; // [rsp+5Ch] [rbp-27Ch] BYREF
  unsigned int i; // [rsp+60h] [rbp-278h]
  int v38; // [rsp+64h] [rbp-274h]
  __int64 v39; // [rsp+68h] [rbp-270h] BYREF
  _BYTE *v40; // [rsp+70h] [rbp-268h]
  __int64 v41; // [rsp+78h] [rbp-260h]
  __int64 *v42; // [rsp+80h] [rbp-258h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+88h] [rbp-250h] BYREF
  _BYTE v44[512]; // [rsp+A0h] [rbp-238h] BYREF

  v42 = &v32;
  v11 = a4;
  v38 = a2;
  v41 = a1;
  Win32Error = 0;
  Heap_0 = v44;
  v40 = v44;
  EventDescriptor = 0LL;
  v39 = 0LL;
  v14 = 0;
  v36 = 0;
  v35 = 0;
  if ( a9 && !a11 || a8 && !a10 || !a3 )
  {
    Win32Error = 87;
    goto LABEL_36;
  }
  v15 = Sid;
  v16 = a8 + (Sid != 0LL) + 7;
  if ( a9 )
    ++v16;
  if ( v16 > 0x20 )
  {
    Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 16LL * v16);
    v40 = Heap_0;
    if ( !Heap_0 )
    {
      Win32Error = 8;
      goto LABEL_36;
    }
  }
  v17 = 0x8000000000000000uLL;
  if ( v11 )
  {
    switch ( v11 )
    {
      case 1:
        v14 = 2;
        break;
      case 2:
        v14 = 3;
        break;
      case 4:
        v14 = 4;
        break;
      case 8:
        v17 = 0x8020000000000000uLL;
        break;
      case 16:
        v17 = 0x8010000000000000uLL;
        break;
    }
  }
  EventDescriptor.Level = v14;
  EventDescriptor.Task = a5;
  EventDescriptor.Opcode = 0;
  EventDescriptor.Keyword = v17;
  if ( !v15 )
    goto LABEL_19;
  if ( RtlValidSid(v15) )
  {
    v36 = 4 * v15[1] + 8;
LABEL_19:
    v39 = MEMORY[0x7FFE0014];
    *(_QWORD *)Heap_0 = &v39;
    *((_QWORD *)Heap_0 + 1) = 8LL;
    *((_QWORD *)Heap_0 + 2) = &a6;
    *((_QWORD *)Heap_0 + 3) = 4LL;
    v33 = 2;
    v18 = -1LL;
    do
      ++v18;
    while ( *(_WORD *)(a3 + 2 * v18) );
    v35 = (unsigned __int16)(v18 + 1);
    *((_QWORD *)Heap_0 + 4) = &v35;
    *((_QWORD *)Heap_0 + 5) = 2LL;
    v19 = 2 * v35;
    *((_QWORD *)Heap_0 + 6) = a3;
    *((_DWORD *)Heap_0 + 14) = v19;
    *((_DWORD *)Heap_0 + 15) = 0;
    *((_QWORD *)Heap_0 + 8) = &v36;
    *((_QWORD *)Heap_0 + 9) = 2LL;
    v20 = 5;
    v33 = 5;
    v21 = v36;
    if ( v36 )
    {
      *((_QWORD *)Heap_0 + 10) = v15;
      *((_DWORD *)Heap_0 + 22) = v21;
      *((_DWORD *)Heap_0 + 23) = 0;
      v20 = 6;
      v33 = 6;
    }
    v22 = 2LL * v20;
    *(_QWORD *)&Heap_0[8 * v22] = &a8;
    *(_QWORD *)&Heap_0[8 * v22 + 8] = 2LL;
    v23 = v20 + 1;
    v33 = v23;
    v24 = 0;
    for ( i = 0; ; i = v24 )
    {
      v25 = v23 + 1;
      if ( v24 >= a8 )
        break;
      v26 = *(_QWORD *)(a10 + 8LL * v24);
      v27 = -1LL;
      do
        ++v27;
      while ( *(_WORD *)(v26 + 2 * v27) );
      *(_QWORD *)&Heap_0[16 * v23] = v26;
      *(_QWORD *)&Heap_0[16 * v23++ + 8] = (unsigned int)(2 * v27 + 2);
      v33 = v25;
      ++v24;
    }
    *(_QWORD *)&Heap_0[16 * v23] = &a9;
    *(_QWORD *)&Heap_0[16 * v23 + 8] = 4LL;
    v33 = v23 + 1;
    v28 = a9;
    if ( a9 )
    {
      v29 = 2LL * v25;
      *(_QWORD *)&Heap_0[8 * v29] = a11;
      *(_DWORD *)&Heap_0[8 * v29 + 8] = v28;
      *(_DWORD *)&Heap_0[8 * v29 + 12] = 0;
      v33 = ++v25;
    }
    if ( v38 )
      v30 = EtwWriteUMSecurityEvent(&EventDescriptor, 4u, v25, (PEVENT_DATA_DESCRIPTOR)Heap_0);
    else
      v30 = EtwpEventWriteFull(v41, (__int128 *)&EventDescriptor, 0LL, 0, 4u, 0LL, 0LL, v25, (__int64)Heap_0);
    goto LABEL_34;
  }
  Win32Error = 87;
  v30 = local_unwind(v42, &loc_1800E605D);
LABEL_34:
  Win32Error = v30;
  if ( Heap_0 != v44 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
LABEL_36:
  RtlSetLastWin32Error(Win32Error);
  return Win32Error == 0;
}
