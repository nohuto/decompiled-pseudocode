/*
 * XREFs of VidSchEnqueueCpuEvent @ 0x140108B90
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x140009B58 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x140011854 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiFreeQueuePacket @ 0x14002E4FC (VidSchiFreeQueuePacket.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14002E900 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_QUEUE_PACKET@@$01$0DIGBGJFG@@@QEAAPEAPEAU_VIDSCH_QUEUE_PACKET@@I@Z @ 0x140035AB0 (-AllocateElements@-$NonPagedPoolZeroedArray@PEAU_VIDSCH_QUEUE_PACKET@@$01$0DIGBGJFG@@@QEAAPEAPEA.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140039044 (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiAllocateQueuePacket @ 0x140108F9C (VidSchiAllocateQueuePacket.c)
 *     VidSchiAllocateHwQueuePacket @ 0x140109138 (VidSchiAllocateHwQueuePacket.c)
 */

__int64 __fastcall VidSchEnqueueCpuEvent(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int8 a5,
        HANDLE Handle)
{
  struct VIDSCH_HW_QUEUE *v6; // r14
  unsigned int v8; // r12d
  struct DXGPROCESS *Current; // rax
  unsigned int v10; // r15d
  NTSTATUS v11; // eax
  unsigned int v12; // r13d
  __int64 Elements; // rbx
  unsigned int i; // esi
  __int64 v15; // rdi
  __int64 v16; // r12
  _DWORD *QueuePacket; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdi
  struct _VIDSCH_QUEUE_PACKET *v21; // rcx
  PVOID v23; // rcx
  bool v24; // zf
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdi
  struct _VIDSCH_QUEUE_PACKET *v28; // rdx
  PVOID Object; // [rsp+58h] [rbp-29h] BYREF
  __int64 v30; // [rsp+60h] [rbp-21h]
  PVOID P; // [rsp+68h] [rbp-19h] BYREF
  _BYTE v32[16]; // [rsp+70h] [rbp-11h] BYREF
  int v33; // [rsp+80h] [rbp-1h]
  int v36; // [rsp+E8h] [rbp+67h]

  v6 = 0LL;
  v8 = a1;
  if ( a3 > 0x41 || !a3 && !a1 )
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    WdLogGlobalForLineNumber = 11371;
    DxgkLogInternalTriageEvent(v25, 0x40000LL);
    return 3221225485LL;
  }
  Current = DXGPROCESS::GetCurrent();
  if ( ((*((_DWORD *)Current + 102) & 0x10) != 0) | BYTE1(*((_DWORD *)Current + 102)) & 1 )
  {
    v10 = 0;
    Object = Handle;
    v36 = 1;
  }
  else
  {
    Object = 0LL;
    v11 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
    v10 = v11;
    v36 = 0;
    if ( v11 < 0 )
    {
      WdLogSingleEntry1(1LL, v11);
      WdLogGlobalForLineNumber = 11394;
      DxgkLogInternalTriageEvent(v26, 0x40000LL);
      return v10;
    }
  }
  v12 = v8 + a3;
  P = 0LL;
  v33 = 0;
  Elements = NonPagedPoolZeroedArray<_VIDSCH_QUEUE_PACKET *,2,945908054>::AllocateElements((__int64)&P, v8 + a3);
  if ( !Elements )
  {
    WdLogSingleEntry0(3LL);
    v23 = P;
    v24 = P == v32;
    WdLogGlobalForLineNumber = 11405;
LABEL_33:
    if ( !v24 && v23 )
      ExFreePoolWithTag(v23, 0);
    return 3221225495LL;
  }
  for ( i = 0; i < v12; ++i )
  {
    v30 = i;
    v15 = 8LL * i;
    if ( i >= v8 )
    {
      _mm_lfence();
      v16 = *(_QWORD *)(a4 + 8LL * (i - v8));
LABEL_12:
      QueuePacket = (_DWORD *)VidSchiAllocateQueuePacket(v16, *(_DWORD *)(v16 + 804) == 0);
      goto LABEL_13;
    }
    v16 = 0LL;
    v6 = *(struct VIDSCH_HW_QUEUE **)(v15 + a2);
    if ( !v6 )
      goto LABEL_12;
    QueuePacket = (_DWORD *)VidSchiAllocateHwQueuePacket(*(_QWORD *)(v15 + a2), 0LL);
LABEL_13:
    *(_QWORD *)(v15 + Elements) = QueuePacket;
    if ( !QueuePacket )
    {
      WdLogSingleEntry1(3LL, -1073741801LL);
      WdLogGlobalForLineNumber = 11449;
      if ( i )
      {
        v27 = v30;
        do
        {
          v28 = *(struct _VIDSCH_QUEUE_PACKET **)Elements;
          if ( *(_QWORD *)Elements )
          {
            if ( *((_QWORD *)v28 + 12) )
              VidSchiFreeQueuePacket(v6, v28);
            else
              VidSchiFreeQueuePacket(v16, (__int64)v28);
          }
          Elements += 8LL;
          --v27;
        }
        while ( v27 );
      }
      v23 = P;
      v24 = P == v32;
      goto LABEL_33;
    }
    *QueuePacket = 895576406;
    *(_DWORD *)(*(_QWORD *)(v15 + Elements) + 48LL) = 5;
    *(_QWORD *)(*(_QWORD *)(v15 + Elements) + 56LL) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(*(_QWORD *)(v15 + Elements) + 52LL) = 2;
    v18 = *(_QWORD *)(v15 + Elements);
    if ( v6 )
      *(_QWORD *)(v18 + 96) = v6;
    else
      *(_QWORD *)(v18 + 88) = v16;
    v6 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v15 + Elements) + 104LL) = KeGetCurrentThread();
    *(_QWORD *)(*(_QWORD *)(v15 + Elements) + 72LL) = 0LL;
    *(_DWORD *)(*(_QWORD *)(v15 + Elements) + 280LL) ^= (a5 ^ (unsigned __int8)*(_DWORD *)(*(_QWORD *)(v15 + Elements)
                                                                                         + 280LL)) & 1;
    *(_DWORD *)(*(_QWORD *)(v15 + Elements) + 280LL) |= 2u;
    *(_DWORD *)(*(_QWORD *)(v15 + Elements) + 280LL) = *(_DWORD *)(*(_QWORD *)(v15 + Elements) + 280LL) & 0xFFFFFFF7 | (8 * v36);
    *(_QWORD *)(*(_QWORD *)(v15 + Elements) + 544LL) = Object;
    *(_QWORD *)(*(_QWORD *)(v15 + Elements) + 800LL) = 0LL;
    v19 = *(_QWORD *)(v15 + Elements);
    if ( i )
    {
      *(_QWORD *)(v19 + 808) = *(_QWORD *)(Elements + 8LL * (i - 1));
      *(_QWORD *)(*(_QWORD *)(Elements + 8LL * (i - 1)) + 800LL) = *(_QWORD *)(v15 + Elements);
    }
    else
    {
      *(_QWORD *)(v19 + 808) = 0LL;
    }
    v8 = a1;
  }
  if ( v12 )
  {
    v20 = v12;
    do
    {
      v21 = *(struct _VIDSCH_QUEUE_PACKET **)Elements;
      if ( *(_QWORD *)(*(_QWORD *)Elements + 96LL) )
        VidSchiSubmitCommandPacketToHwQueue(v21);
      else
        VidSchiSubmitCommandPacketToQueue((__int64)v21);
      Elements += 8LL;
      --v20;
    }
    while ( v20 );
  }
  if ( P != v32 && P )
    ExFreePoolWithTag(P, 0);
  return v10;
}
