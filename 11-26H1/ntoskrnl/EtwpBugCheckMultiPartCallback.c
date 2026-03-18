/*
 * XREFs of EtwpBugCheckMultiPartCallback @ 0x1406C7000
 * Callers:
 *     <none>
 * Callees:
 *     KeTestSpinLock @ 0x140449B50 (KeTestSpinLock.c)
 *     memmove @ 0x14073D480 (memmove.c)
 */

void __fastcall EtwpBugCheckMultiPartCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _QWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  void **p_KernelShadowStack; // rbx
  LARGE_INTEGER *v6; // rcx
  _QWORD **v7; // rsi
  _QWORD *v8; // r8
  __int64 v9; // r14
  unsigned int v10; // ebp
  __int64 v11; // rcx
  _QWORD *v12; // rcx
  __int64 v13; // r9
  _DWORD *v14; // rdx
  int v15; // eax
  int v16; // edx

  p_KernelShadowStack = (void **)ReasonSpecificData[6];
  *((_DWORD *)ReasonSpecificData + 10) = 0;
  *((_OWORD *)ReasonSpecificData + 1) = EtwSecondaryDumpDataGuid;
  if ( !p_KernelShadowStack )
  {
    p_KernelShadowStack = &ExpSysDbgLock.KernelShadowStack;
    *(_OWORD *)&ExpSysDbgLock.KernelShadowStack = 0LL;
    ReasonSpecificData[6] = &ExpSysDbgLock.KernelShadowStack;
  }
  if ( *((_BYTE *)p_KernelShadowStack + 2) )
  {
    v7 = (_QWORD **)(p_KernelShadowStack + 1);
    v8 = p_KernelShadowStack[1];
    if ( v8 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(EtwpHostSiloState + 712) + 8LL * *(unsigned __int16 *)p_KernelShadowStack);
      v14 = (_DWORD *)v8[2];
      if ( v14[2] <= *v14 )
        v15 = v14[2];
      else
        v15 = v14[1];
      v14[12] = v15;
      *((_DWORD *)ReasonSpecificData + 10) = v15;
      if ( *((_DWORD *)ReasonSpecificData + 2) )
        ReasonSpecificData[4] = v14;
      v12 = (_QWORD *)**v7;
      if ( v12 == (_QWORD *)(v13 + 80) )
        v12 = 0LL;
LABEL_26:
      *v7 = v12;
      if ( !v12 )
LABEL_27:
        ++*(_WORD *)p_KernelShadowStack;
    }
    else
    {
      while ( (unsigned int)*(unsigned __int16 *)p_KernelShadowStack < *(_DWORD *)(EtwpHostSiloState + 16) )
      {
        v9 = *(_QWORD *)(*(_QWORD *)(EtwpHostSiloState + 712) + 8LL * *(unsigned __int16 *)p_KernelShadowStack);
        if ( (v9 & 1) == 0
          && *(int *)(v9 + 12) < 0
          && (*(_DWORD *)(v9 + 300) & 1) == 0
          && KeTestSpinLock((PKSPIN_LOCK)(v9 + 696)) )
        {
          v10 = *(unsigned __int16 *)(v9 + 136) + 48;
          *((_DWORD *)ReasonSpecificData + 10) = v10;
          if ( !*((_DWORD *)ReasonSpecificData + 2) )
            goto LABEL_17;
          if ( v10 <= *((_DWORD *)ReasonSpecificData + 3) )
          {
            v11 = *ReasonSpecificData;
            *(_DWORD *)v11 = 32223201;
            *(_DWORD *)(v11 + 4) = *(_DWORD *)v9;
            *(_DWORD *)(v11 + 16) = *(_DWORD *)(v9 + 4);
            *(_DWORD *)(v11 + 12) = *(_DWORD *)(v9 + 200);
            *(_QWORD *)(v11 + 24) = *(_QWORD *)(v9 + 792);
            *(_DWORD *)(v11 + 8) = *(_DWORD *)(v9 + 12);
            *(_DWORD *)(v11 + 20) = *(unsigned __int16 *)(v9 + 136);
            *(_OWORD *)(v11 + 32) = *(_OWORD *)(v9 + 304);
            memmove((void *)(v11 + 48), *(const void **)(v9 + 144), *(unsigned __int16 *)(v9 + 136));
            ReasonSpecificData[4] = *ReasonSpecificData;
            *((_DWORD *)ReasonSpecificData + 10) = v10;
            *((_DWORD *)ReasonSpecificData + 2) = v10;
LABEL_17:
            v12 = *(_QWORD **)(v9 + 80);
            if ( v12 != (_QWORD *)(v9 + 80) )
              goto LABEL_26;
            *v7 = 0LL;
            goto LABEL_27;
          }
        }
        ++*(_WORD *)p_KernelShadowStack;
      }
    }
  }
  else
  {
    *((_DWORD *)ReasonSpecificData + 10) = 32;
    if ( *((_DWORD *)ReasonSpecificData + 2) )
    {
      v6 = (LARGE_INTEGER *)*ReasonSpecificData;
      v6[2].QuadPart = EtwpBootTime;
      v6[1].LowPart = EtwCPUSpeedInMHz;
      v6[3] = EtwPerfFreq;
      v6->LowPart = KeMaximumIncrement;
      v6->HighPart = NtBuildNumber;
      ReasonSpecificData[4] = *ReasonSpecificData;
      *((_DWORD *)ReasonSpecificData + 10) = 32;
      *((_DWORD *)ReasonSpecificData + 2) = 32;
    }
    *((_BYTE *)p_KernelShadowStack + 2) = 1;
    v7 = (_QWORD **)(p_KernelShadowStack + 1);
  }
  v16 = *((_DWORD *)ReasonSpecificData + 14);
  if ( (unsigned int)*(unsigned __int16 *)p_KernelShadowStack >= *(_DWORD *)(EtwpHostSiloState + 16) )
  {
    *((_DWORD *)ReasonSpecificData + 14) = v16 & 0xFFFFFFFE;
    *v7 = 0LL;
    *((_BYTE *)p_KernelShadowStack + 2) = 0;
    *(_WORD *)p_KernelShadowStack = 0;
  }
  else
  {
    *((_DWORD *)ReasonSpecificData + 14) = v16 | 1;
  }
}
