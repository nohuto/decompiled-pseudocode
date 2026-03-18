/*
 * XREFs of ?RouteFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180114240
 * Callers:
 *     ?RouteAllFrames@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x1801138C4 (-RouteAllFrames@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?TargetFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x1801136A4 (-TargetFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?RoutePointer@GestureTargeting@InputTraceLogging@@SAX_K0KKPEAX@Z @ 0x1801146E8 (-RoutePointer@GestureTargeting@InputTraceLogging@@SAX_K0KKPEAX@Z.c)
 *     ?CheckForBufferedDescendant@CManipulationManager@@IEBA_NPEAVCManipulationFrame@@K@Z @ 0x1801147B0 (-CheckForBufferedDescendant@CManipulationManager@@IEBA_NPEAVCManipulationFrame@@K@Z.c)
 *     ?AcquireExclusive@CReadWriteLock@@QEAAXXZ @ 0x18011560C (-AcquireExclusive@CReadWriteLock@@QEAAXXZ.c)
 *     ?IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ @ 0x180115FDC (-IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

void __fastcall CManipulationManager::RouteFrameInput(CManipulationManager *this, struct CManipulationFrame *a2)
{
  int v3; // r13d
  char *v4; // r14
  __int64 v5; // rax
  char v6; // r14
  CManipulationManager *v7; // r9
  bool v8; // r14
  unsigned int v9; // esi
  bool v10; // cf
  __int64 v11; // rcx
  __int64 v12; // r12
  void *v13; // rdx
  unsigned int v14; // r13d
  void *v15; // rsi
  int v16; // r14d
  __int64 v17; // rdx
  char v18; // al
  bool v19; // [rsp+30h] [rbp-118h]
  unsigned int v20; // [rsp+34h] [rbp-114h]
  int v21; // [rsp+3Ch] [rbp-10Ch]
  int v22; // [rsp+40h] [rbp-108h] BYREF
  int v23; // [rsp+44h] [rbp-104h] BYREF
  CManipulationManager *v24; // [rsp+48h] [rbp-100h]
  __int64 v25; // [rsp+50h] [rbp-F8h]
  void *v26; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v27; // [rsp+68h] [rbp-E0h]
  CManipulationManager *v28; // [rsp+70h] [rbp-D8h]
  struct CManipulationFrame *v29; // [rsp+78h] [rbp-D0h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+80h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-B8h] BYREF
  __int128 v32; // [rsp+A0h] [rbp-A8h]
  __int128 v33; // [rsp+B0h] [rbp-98h]
  __int128 v34; // [rsp+C0h] [rbp-88h]
  __int128 v35; // [rsp+D0h] [rbp-78h]
  __int128 v36; // [rsp+E0h] [rbp-68h]
  __int128 v37; // [rsp+F0h] [rbp-58h]
  __int128 v38; // [rsp+100h] [rbp-48h]
  __int128 v39; // [rsp+110h] [rbp-38h]

  v24 = this;
  v28 = this;
  v29 = a2;
  v3 = 0;
  v21 = 0;
  v4 = (char *)a2 + 176;
  v5 = 256LL;
  if ( *((_DWORD *)a2 + 92) != 5 )
    v5 = 248LL;
  if ( *(_QWORD *)((char *)this + v5) - *((_QWORD *)a2 + 56) > *((_QWORD *)this + 34) )
  {
    *v4 |= 2u;
    CManipulationManager::TargetFrameInput(this, a2);
  }
  v6 = *v4;
  if ( (v6 & 1) != 0 && !CManipulationFrame::IsMousewheelFrame(a2) )
  {
    v8 = (v6 & 4) != 0;
LABEL_8:
    v9 = 0;
    v20 = 0;
    v19 = v8;
LABEL_9:
    v10 = v9 < *((_DWORD *)a2 + 4);
    while ( v10 )
    {
      v11 = 248LL * v9;
      v25 = v11;
      v23 = v8;
      if ( (*((_BYTE *)a2 + v11 + 608) & 1) == v23
        && *(_DWORD *)((char *)a2 + v11 + 376)
        && !*(_DWORD *)((char *)a2 + v11 + 600) )
      {
        if ( *(_QWORD *)((char *)a2 + v11 + 392) == -1LL || CManipulationManager::CheckForBufferedDescendant(v7, a2, v9) )
        {
          v21 = ++v3;
        }
        else
        {
          CReadWriteLock::AcquireExclusive((CReadWriteLock *)&CManipulationManager::s_rwPointerBufferLock);
          v12 = 0LL;
          v13 = *(void **)((char *)a2 + v25 + 392);
          v25 = (__int64)v13;
          if ( v9 < *((_DWORD *)a2 + 4) )
          {
            v14 = v9;
            v15 = v13;
            v16 = v23;
            do
            {
              v17 = 248LL * v14;
              v27 = v17;
              if ( *(void **)((char *)a2 + v17 + 392) == v15
                && (*((_BYTE *)a2 + v17 + 608) & 1) == v16
                && *(_DWORD *)((char *)a2 + v17 + 376) )
              {
                CManipulationManager::s_rgPointerIds[v12] = *(_DWORD *)((char *)a2 + v17 + 372);
                v12 = (unsigned int)(v12 + 1);
                *(_DWORD *)((char *)a2 + v17 + 376) = 0;
                if ( (unsigned int)dword_1803DC880 > 4
                  && (qword_1803DC890 & 2) != 0
                  && (qword_1803DC898 & 2) == qword_1803DC898 )
                {
                  v26 = v15;
                  v23 = *(_DWORD *)((char *)a2 + v17 + 372);
                  v22 = *((_DWORD *)a2 + 6);
                  *(_QWORD *)&v35 = &v26;
                  *((_QWORD *)&v35 + 1) = 8LL;
                  *(_QWORD *)&v34 = &v23;
                  *((_QWORD *)&v34 + 1) = 4LL;
                  *(_QWORD *)&v33 = &v22;
                  *((_QWORD *)&v33 + 1) = 4LL;
                  *(_DWORD *)&EventDescriptor.Id = 184549376;
                  *(_DWORD *)&EventDescriptor.Level = 4;
                  EventDescriptor.Keyword = 2LL;
                  UserData.Ptr = (ULONGLONG)off_1803DC888;
                  UserData.Size = *(unsigned __int16 *)off_1803DC888;
                  UserData.Reserved = 2;
                  *(_QWORD *)&v32 = &unk_1803AF5A2;
                  *((_QWORD *)&v32 + 1) = 0x10000003ALL;
                  EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
                  v17 = v27;
                }
                UserData = (struct _EVENT_DATA_DESCRIPTOR)*((_OWORD *)a2 + 2);
                v32 = *((_OWORD *)a2 + 3);
                v33 = *((_OWORD *)a2 + 4);
                v34 = *((_OWORD *)a2 + 5);
                v35 = *((_OWORD *)a2 + 6);
                v36 = *((_OWORD *)a2 + 7);
                v37 = *((_OWORD *)a2 + 8);
                v38 = *((_OWORD *)a2 + 9);
                v39 = *((_OWORD *)a2 + 10);
                InputTraceLogging::GestureTargeting::RoutePointer(
                  *((_QWORD *)a2 + 56),
                  UserData.Ptr,
                  *((_DWORD *)a2 + 6),
                  *(_DWORD *)((char *)a2 + v17 + 372),
                  v15);
              }
              ++v14;
            }
            while ( v14 < *((_DWORD *)a2 + 4) );
            v9 = v20;
            v8 = v19;
            v3 = v21;
            v13 = (void *)v25;
          }
          SetManipulationInputTarget(
            *((unsigned int *)a2 + 6),
            v13,
            (unsigned int)v12,
            CManipulationManager::s_rgPointerIds,
            (char *)a2 + 32);
          *((_DWORD *)a2 + 5) += v12;
          dword_1803E2648 = 0;
          ReleaseSRWLockExclusive(&CManipulationManager::s_rwPointerBufferLock);
        }
      }
      v20 = ++v9;
      v10 = v9 < *((_DWORD *)a2 + 4);
      v7 = v24;
      if ( v9 == *((_DWORD *)a2 + 4) )
      {
        if ( !v8 )
          goto LABEL_9;
        v8 = 0;
        goto LABEL_8;
      }
    }
    v18 = *((_BYTE *)a2 + 176) & 0xFE;
    *((_BYTE *)a2 + 176) = v18;
    if ( !v3 )
      *((_BYTE *)a2 + 176) = v18 & 0xFB;
  }
}
