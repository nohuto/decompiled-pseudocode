/*
 * XREFs of ?AddMapping@InputObjectMap@@SAJAEBU_LUID@@PEBUCompositionInputObject@@@Z @ 0x1402481D4
 * Callers:
 *     NtUserAddVisualIdentifier @ 0x1401E2110 (NtUserAddVisualIdentifier.c)
 * Callees:
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA?A_PPEAX@Z @ 0x1400431D0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA-A_PPEAX@Z.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?AddMapping@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@U_LUID@@@Z @ 0x140248524 (-AddMapping@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@U_LUID@@@Z.c)
 *     ?AllocateBucket@InputObjectMap@@CAPEAX_KPEAX@Z @ 0x14024858C (-AllocateBucket@InputObjectMap@@CAPEAX_KPEAX@Z.c)
 *     ?FindEntry@InputObjectMap@@CAPEAUInputObjectMapEntry@@AEBU_LUID@@@Z @ 0x1402485B8 (-FindEntry@InputObjectMap@@CAPEAUInputObjectMapEntry@@AEBU_LUID@@@Z.c)
 */

__int64 __fastcall InputObjectMap::AddMapping(const struct _LUID *a1, const struct CompositionInputObject *a2)
{
  const struct CompositionInputObject *v2; // r15
  struct W32_PUSH_LOCK *v4; // rbx
  unsigned int v5; // ebp
  __int64 UserInputMgrSessionState; // rax
  __int64 v7; // r14
  __int64 v8; // rsi
  char *Bucket; // r8
  char v10; // cl
  unsigned __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // r10
  __int64 v14; // r15
  _QWORD *v15; // r9
  __int64 v16; // rdx
  void *v17; // rcx
  __int64 Pool2; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v24; // [rsp+70h] [rbp+18h]
  __int64 v25; // [rsp+70h] [rbp+18h]

  v2 = a2;
  v4 = (struct W32_PUSH_LOCK *)(W32GetUserInputMgrSessionState() + 8);
  W32AcquirePushLockExclusiveEx(v4);
  v5 = 0;
  if ( !InputObjectMap::FindEntry(a1) )
  {
    UserInputMgrSessionState = W32GetUserInputMgrSessionState();
    v7 = UserInputMgrSessionState + 16;
    v8 = (unsigned int)(2 * (*(_DWORD *)(UserInputMgrSessionState + 20) >> 5));
    if ( *(_DWORD *)(UserInputMgrSessionState + 16) >= (unsigned int)v8 )
    {
      if ( (unsigned int)v8 < 4 )
        v8 = 4LL;
      Bucket = (char *)InputObjectMap::AllocateBucket(8LL * (unsigned int)v8, 0LL);
      if ( Bucket )
      {
        if ( (((_DWORD)v8 - 1) & (unsigned int)v8) != 0 )
        {
          v10 = -1;
          do
          {
            ++v10;
            LODWORD(v8) = (unsigned int)v8 >> 1;
          }
          while ( (_DWORD)v8 );
          v8 = (unsigned int)(1 << v10);
        }
        if ( (unsigned int)v8 > 0x4000000 )
          v8 = 0x4000000LL;
        v11 = (unsigned int)v8;
        if ( Bucket > &Bucket[8 * v8] )
          v11 = 0LL;
        if ( v11 )
          memset64(Bucket, v7 | 1, v11);
        v12 = 0;
        v13 = -1LL << (*(_BYTE *)(v7 + 4) & 0x1F);
        if ( (*(_DWORD *)(v7 + 4) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v14 = *(_QWORD *)(v7 + 8);
            while ( 1 )
            {
              v15 = *(_QWORD **)(v14 + 8LL * v12);
              if ( ((unsigned __int8)v15 & 1) != 0 )
                break;
              *(_QWORD *)(v14 + 8LL * v12) = *v15;
              v24 = v13 & v15[1];
              v16 = ((_DWORD)v8 - 1) & (HIBYTE(v24)
                                      + 37
                                      * (BYTE6(v24)
                                       + 37
                                       * (BYTE5(v24)
                                        + 37
                                        * (BYTE4(v24)
                                         + 37
                                         * (BYTE3(v24)
                                          + 374026047
                                          + 37
                                          * (BYTE2(v24) + 37 * (BYTE1(v24) + 37 * (unsigned int)(unsigned __int8)v24)))))));
              *v15 = *(_QWORD *)&Bucket[8 * v16];
              *(_QWORD *)&Bucket[8 * v16] = v15;
            }
            ++v12;
          }
          while ( v12 < *(_DWORD *)(v7 + 4) >> 5 );
          v2 = a2;
        }
        v17 = *(void **)(v7 + 8);
        *(_QWORD *)(v7 + 8) = Bucket;
        *(_DWORD *)(v7 + 4) = (32 * v8) | *(_DWORD *)(v7 + 4) & 0x1F;
        if ( v17 )
          _lambda_2af9a864ca5eb776d3057466a2e51944_::_lambda_invoker_cdecl_<void *>(v17);
      }
      else if ( *(_DWORD *)(v7 + 4) < 0x20u )
      {
        goto LABEL_29;
      }
    }
    Pool2 = ExAllocatePool2(258LL, 32LL, 1986945877LL);
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 8) = HIBYTE(a1->HighPart)
                             + 37
                             * (BYTE2(a1->HighPart)
                              + 37
                              * (BYTE1(a1->HighPart)
                               + 37
                               * (LOBYTE(a1->HighPart)
                                + 37
                                * (HIBYTE(a1->LowPart)
                                 + 37
                                 * (BYTE2(a1->LowPart)
                                  + 37 * (BYTE1(a1->LowPart) + 37 * (LOBYTE(a1->LowPart) + 11623883LL)))))));
      *(struct _LUID *)(Pool2 + 16) = *a1;
      *(_QWORD *)(Pool2 + 24) = v2;
      v19 = W32GetUserInputMgrSessionState();
      v25 = *(_QWORD *)(Pool2 + 8) & (-1LL << (*(_DWORD *)(v19 + 20) & 0x1F));
      v20 = *(_QWORD *)(v19 + 24);
      v21 = ((*(_DWORD *)(v19 + 20) >> 5) - 1) & (HIBYTE(v25)
                                                + 37
                                                * (BYTE6(v25)
                                                 + 37
                                                 * (BYTE5(v25)
                                                  + 37
                                                  * (BYTE4(v25)
                                                   + 37
                                                   * (BYTE3(v25)
                                                    + 374026047
                                                    + 37
                                                    * (BYTE2(v25)
                                                     + 37 * (BYTE1(v25) + 37 * (unsigned int)(unsigned __int8)v25)))))));
      *(_QWORD *)Pool2 = *(_QWORD *)(v20 + 8 * v21);
      *(_QWORD *)(v20 + 8 * v21) = Pool2;
      ++*(_DWORD *)(v19 + 16);
      ObReferenceObjectByPointer(v2, 3u, ExCompositionObjectType, 0);
      InputTraceLogging::InputSink::AddMapping(v2, *a1);
      goto LABEL_27;
    }
LABEL_29:
    v5 = -1073741670;
    goto LABEL_27;
  }
  v5 = -1073741811;
LABEL_27:
  W32ReleasePushLockExclusiveEx(v4);
  return v5;
}
