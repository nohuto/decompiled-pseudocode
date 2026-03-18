/*
 * XREFs of VidSchiProcessFlipPendingContextList @ 0x140020700
 * Callers:
 *     VidSchiClearFlipDevice @ 0x140003564 (VidSchiClearFlipDevice.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x14001F7AC (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VI.c)
 *     VidSchiUpdateFlipDeviceStatus @ 0x14001FC88 (VidSchiUpdateFlipDeviceStatus.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x140020F00 (VidSchiUpdateContextStatus.c)
 */

__int64 __fastcall VidSchiProcessFlipPendingContextList(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  _QWORD **v3; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rbx
  BOOL v9; // ecx
  __int64 v10; // rax
  _QWORD **v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // r8
  _QWORD *v15; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  char v19; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  v3 = (_QWORD **)(a2 + 3768);
  while ( 1 )
  {
    v6 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v6[1] != v3 || (v7 = (_QWORD *)*v6, *(_QWORD **)(*v6 + 8LL) != v6) )
LABEL_27:
      __fastfail(3u);
    *v3 = v7;
    v8 = v6 - 5;
    v7[1] = v3;
    v9 = 0;
    *v6 = 0LL;
    v6[1] = 0LL;
    if ( (v6[19] & 0x10) != 0 )
    {
      *((_DWORD *)v8 + 48) &= ~0x10u;
      if ( (v8[24] & 0x100) == 0 )
      {
        if ( (v8[24] & 0x200) != 0 )
        {
          if ( (v8[24] & 2) == 0 )
          {
            v17 = 10LL;
            v18 = 25297LL;
            goto LABEL_30;
          }
          goto LABEL_31;
        }
        if ( (_QWORD *)v8[84] == v8 + 84 )
        {
          VidSchiUpdateContextStatus(v8, 0LL, 25314LL);
          v9 = 0;
        }
        else
        {
          if ( !*((_DWORD *)v8 + 197) )
          {
            v17 = 1LL;
            v18 = 25380LL;
            goto LABEL_30;
          }
          if ( (v8[24] & 0x20) != 0 )
          {
            VidSchiUpdateContextStatus(v8, 4LL, 23565LL);
            v9 = 0;
          }
          else
          {
            if ( (*((_DWORD *)v8 + 48) & 0x80u) != 0 )
            {
              v17 = 8LL;
              v18 = 23565LL;
              goto LABEL_30;
            }
            if ( (v8[24] & 0x10) != 0 )
            {
              VidSchiUpdateContextStatus(v8, 3LL, 23565LL);
              v9 = 0;
            }
            else
            {
              if ( (v8[24] & 0x40) != 0 )
              {
                v17 = 7LL;
                v18 = 23565LL;
LABEL_30:
                VidSchiUpdateContextStatus(v8, v17, v18);
LABEL_31:
                v9 = 0;
                goto LABEL_20;
              }
              if ( (v8[24] & 8) != 0 )
              {
                VidSchiUpdateContextStatus(v8, 2LL, 23565LL);
                v9 = 0;
              }
              else if ( (v8[24] & 1) == 0 && (v8[24] & 0x100) == 0 )
              {
                if ( _InterlockedCompareExchange((volatile signed __int32 *)v8 + 111, 0, 0) == 2 )
                {
                  v10 = v8[12];
                  v19 = 0;
                  DpSynchronizeExecution(
                    *(_QWORD *)(*(_QWORD *)(v10 + 24) + 32LL),
                    VidSchiResetContextQuantumAtISR,
                    v8,
                    *(unsigned int *)(*(_QWORD *)(v10 + 24) + 40LL),
                    &v19);
                }
                v9 = VidSchiUpdateContextStatus(v8, 5LL, 23565LL) != 0;
              }
            }
          }
        }
      }
    }
LABEL_20:
    v2 |= v9;
  }
  v11 = (_QWORD **)(a2 + 3784);
  while ( 1 )
  {
    v12 = *v11;
    if ( *v11 == v11 )
      return v2;
    if ( (_QWORD **)v12[1] != v11 )
      goto LABEL_27;
    v13 = (_QWORD *)*v12;
    if ( *(_QWORD **)(*v12 + 8LL) != v12 )
      goto LABEL_27;
    *v11 = v13;
    v14 = v12 + 19;
    v13[1] = v11;
    *v12 = 0LL;
    v12[1] = 0LL;
    if ( !v12[19] )
    {
      v15 = *(_QWORD **)(a1 + 16);
      if ( *v15 != a1 + 8 )
        goto LABEL_27;
      *v14 = a1 + 8;
      v12[20] = v15;
      *v15 = v14;
      *(_QWORD *)(a1 + 16) = v14;
      *(_BYTE *)(a1 + 24) = 0;
    }
  }
}
