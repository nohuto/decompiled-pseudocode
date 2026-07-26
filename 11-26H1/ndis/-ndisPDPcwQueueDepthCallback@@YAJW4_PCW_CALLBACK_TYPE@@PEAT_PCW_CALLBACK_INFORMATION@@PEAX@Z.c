/*
 * XREFs of ?ndisPDPcwQueueDepthCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x140076A40
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCountSetBits64@@YAK_K@Z @ 0x1400A6C8C (-ndisCountSetBits64@@YAK_K@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015C650 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisWildCardStringMatch@@YAEPEBU_UNICODE_STRING@@0E@Z @ 0x140162920 (-ndisWildCardStringMatch@@YAEPEBU_UNICODE_STRING@@0E@Z.c)
 *     ?ReleaseExclusive@KPushLockBase@@QEAAXXZ @ 0x140164340 (-ReleaseExclusive@KPushLockBase@@QEAAXXZ.c)
 *     ?AcquireExclusive@KPushLockBase@@QEAAXXZ @ 0x140164360 (-AcquireExclusive@KPushLockBase@@QEAAXXZ.c)
 */

__int64 __fastcall ndisPDPcwQueueDepthCallback(unsigned int a1, union _PCW_CALLBACK_INFORMATION *a2, void *a3)
{
  KPushLockBase *v3; // rbx
  NTSTATUS v6; // edi
  unsigned __int8 v7; // r8
  KPushLockBase *v8; // rax
  KPushLockBase *Value; // rsi
  unsigned __int64 v10; // r12
  unsigned __int64 *i; // rax
  __int64 *j; // r15
  ULONG InstanceId; // eax
  ULONG v14; // r8d
  struct _PCW_BUFFER *v15; // rcx
  unsigned int v16; // ebx
  ULONG v18; // r8d
  struct _PCW_BUFFER *Buffer; // rcx
  unsigned int v20; // eax
  struct _PCW_DATA Data; // [rsp+30h] [rbp-58h] BYREF
  KLockHolder v22; // [rsp+40h] [rbp-48h] BYREF

  v3 = qword_14011EE98;
  v22.m_Lock = qword_14011EE98;
  v6 = 0;
  KeEnterCriticalRegion();
  v22.m_Region.m_Entered = 1;
  KPushLockBase::AcquireExclusive(v3);
  v8 = qword_14011EE98;
  v22.m_State = Exclusive;
  Value = (KPushLockBase *)qword_14011EE98[1].m_Lock.Value;
  while ( Value != &v8[1] )
  {
    v10 = Value[6].m_Lock.Value;
    for ( i = (unsigned __int64 *)&Value[6]; (unsigned __int64 *)v10 != i; i = (unsigned __int64 *)&Value[6] )
    {
      for ( j = *(__int64 **)(v10 + 120); j != (__int64 *)(v10 + 120); j = (__int64 *)*j )
      {
        if ( a1 < 2 )
        {
          if ( ndisWildCardStringMatch(a2->AddCounter.InstanceMask, (const struct _UNICODE_STRING *)j + 2, v7) )
          {
            v20 = ndisCountSetBits64(a2->AddCounter.CounterMask);
            if ( a1 == 1 )
              v20 = -v20;
            if ( !*(_DWORD *)(v10 + 136) )
              *(_QWORD *)(v10 + 152) = 0LL;
            _InterlockedAdd((volatile signed __int32 *)(v10 + 136), v20);
            if ( !*((_DWORD *)j + 12) )
              *(__int64 *)((char *)j + 52) = 0LL;
            _InterlockedAdd((volatile signed __int32 *)j + 12, v20);
          }
        }
        else if ( a1 == 2 )
        {
          v18 = *((_DWORD *)j + 6);
          Buffer = a2->EnumerateInstances.Buffer;
          Data.Data = 0LL;
          Data.Size = 8;
          v6 = PcwAddInstance(Buffer, (PCUNICODE_STRING)j + 2, v18, 1u, &Data);
          if ( v6 < 0 )
          {
            KLockHolder::~KLockHolder(&v22);
            return (unsigned int)v6;
          }
        }
        else if ( a1 == 3 )
        {
          InstanceId = a2->EnumerateInstances.InstanceId;
          if ( InstanceId == -1 || InstanceId == *((_DWORD *)j + 6) )
          {
            v14 = *((_DWORD *)j + 6);
            v15 = a2->EnumerateInstances.Buffer;
            Data.Data = (char *)j + 52;
            Data.Size = 8;
            v16 = PcwAddInstance(v15, (PCUNICODE_STRING)j + 2, v14, 1u, &Data);
            KLockHolder::~KLockHolder(&v22);
            return v16;
          }
        }
      }
      v10 = *(_QWORD *)v10;
    }
    Value = (KPushLockBase *)Value->m_Lock.Value;
    v8 = qword_14011EE98;
  }
  KPushLockBase::ReleaseExclusive(v3);
  KeLeaveCriticalRegion();
  return (unsigned int)v6;
}
