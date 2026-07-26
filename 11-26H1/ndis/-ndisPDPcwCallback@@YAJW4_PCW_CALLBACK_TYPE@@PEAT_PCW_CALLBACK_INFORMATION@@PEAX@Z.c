/*
 * XREFs of ?ndisPDPcwCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x14006A5A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ?NdisPDPIQueryCounter@@YAXPEAUNDIS_PD_COUNTER_HANDLE__@@PEAT_NDIS_PD_COUNTER_VALUE@@@Z @ 0x14013E5C0 (-NdisPDPIQueryCounter@@YAXPEAUNDIS_PD_COUNTER_HANDLE__@@PEAT_NDIS_PD_COUNTER_VALUE@@@Z.c)
 *     ?ReleaseExclusive@KPushLockBase@@QEAAXXZ @ 0x140164340 (-ReleaseExclusive@KPushLockBase@@QEAAXXZ.c)
 *     ?AcquireExclusive@KPushLockBase@@QEAAXXZ @ 0x140164360 (-AcquireExclusive@KPushLockBase@@QEAAXXZ.c)
 */

__int64 __fastcall ndisPDPcwCallback(unsigned int a1, union _PCW_CALLBACK_INFORMATION *a2, void *a3)
{
  int v3; // ebp
  NTSTATUS v4; // esi
  KPushLockBase *v8; // r13
  KPushLockBase *v9; // rcx
  KPushLockBase *Value; // rdi
  KPushLockBase *v11; // r12
  struct NDIS_PD_COUNTER_HANDLE__ *v12; // rax
  struct NDIS_PD_COUNTER_HANDLE__ *v13; // rcx
  ULONG InstanceId; // ecx
  ULONG v15; // eax
  struct _PCW_BUFFER *Buffer; // rcx
  struct NDIS_PD_COUNTER_HANDLE__ *v17; // [rsp+30h] [rbp-68h]
  struct _PCW_DATA Data; // [rsp+38h] [rbp-60h] BYREF
  union _NDIS_PD_COUNTER_VALUE v19; // [rsp+48h] [rbp-50h] BYREF

  v3 = (int)a3;
  Data.Data = 0LL;
  v4 = 0;
  *(_QWORD *)&Data.Size = 0LL;
  if ( a1 <= 1 )
    return 0LL;
  v8 = qword_14011EE98;
  KeEnterCriticalRegion();
  KPushLockBase::AcquireExclusive(v8);
  v9 = qword_14011EE98;
  Value = (KPushLockBase *)qword_14011EE98[1].m_Lock.Value;
  if ( Value != &qword_14011EE98[1] )
  {
    do
    {
      v11 = (KPushLockBase *)Value[2].m_Lock.Value;
      if ( v11 != &Value[2] )
      {
        do
        {
          v12 = (struct NDIS_PD_COUNTER_HANDLE__ *)v11[12].m_Lock.Value;
          v13 = (struct NDIS_PD_COUNTER_HANDLE__ *)&v11[12];
          while ( 1 )
          {
            v17 = v12;
            if ( v12 == v13 )
              break;
            if ( *((_DWORD *)v12 + 14) == v3 )
            {
              if ( a1 == 2 )
              {
                v4 = PcwAddInstance(
                       a2->EnumerateInstances.Buffer,
                       (PCUNICODE_STRING)v12 + 6,
                       *((_DWORD *)v12 + 17),
                       1u,
                       &Data);
                if ( v4 < 0 )
                  break;
                v12 = v17;
              }
              else
              {
                InstanceId = a2->EnumerateInstances.InstanceId;
                if ( InstanceId == -1 || InstanceId == *((_DWORD *)v12 + 17) )
                {
                  memset(&v19, 0, sizeof(v19));
                  NdisPDPIQueryCounter(v12, &v19);
                  Data.Data = &v19;
                  if ( v3 == 1 )
                  {
                    v15 = 24;
                  }
                  else if ( (unsigned int)(v3 - 2) < 2 )
                  {
                    v15 = 16;
                  }
                  else
                  {
                    v15 = 0;
                  }
                  Buffer = a2->EnumerateInstances.Buffer;
                  Data.Size = v15;
                  v4 = PcwAddInstance(Buffer, (PCUNICODE_STRING)v17 + 6, *((_DWORD *)v17 + 17), 1u, &Data);
                  break;
                }
              }
              v13 = (struct NDIS_PD_COUNTER_HANDLE__ *)&v11[12];
            }
            v12 = *(struct NDIS_PD_COUNTER_HANDLE__ **)v12;
          }
          v11 = (KPushLockBase *)v11->m_Lock.Value;
        }
        while ( v11 != &Value[2] );
        v9 = qword_14011EE98;
      }
      Value = (KPushLockBase *)Value->m_Lock.Value;
    }
    while ( Value != &v9[1] );
  }
  KPushLockBase::ReleaseExclusive(v8);
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
