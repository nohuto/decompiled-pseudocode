/*
 * XREFs of ?ReferenceAdapterByHostLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1401DF85C
 * Callers:
 *     ?VmBusDuplicateHandle@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402260E0 (-VmBusDuplicateHandle@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 */

struct DXGADAPTER *__fastcall DXGGLOBAL::ReferenceAdapterByHostLuid(
        DXGGLOBAL *this,
        struct _LUID a2,
        unsigned __int64 *a3)
{
  DWORD LowPart; // ebx
  char *v6; // r9
  char *v7; // rdx
  char *v8; // rax
  bool v9; // zf
  char *v10; // rdi
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF
  LONG HighPart; // [rsp+4Ch] [rbp+14h]

  HighPart = a2.HighPart;
  LowPart = a2.LowPart;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (DXGGLOBAL *)((char *)this + 760), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  v6 = (char *)this + 808;
  v7 = (char *)*((_QWORD *)this + 101);
  while ( 1 )
  {
    v8 = 0LL;
    if ( v7 != v6 )
      v8 = v7;
    if ( !v8 )
      break;
    v9 = v7 == v6;
    v10 = v7;
    v7 = *(char **)v7;
    if ( v9 )
      v10 = 0LL;
    if ( *((_DWORD *)v10 + 1203) == LowPart && *((_DWORD *)v10 + 1204) == HighPart )
    {
      _m_prefetchw(v10 + 24);
      v11 = *((_QWORD *)v10 + 3);
      while ( v11 )
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange64((volatile signed __int64 *)v10 + 3, v11 + 1, v11);
        if ( v12 == v11 )
        {
          *a3 = -1LL;
          goto LABEL_14;
        }
      }
    }
  }
  v10 = 0LL;
LABEL_14:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
  return (struct DXGADAPTER *)v10;
}
