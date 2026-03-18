/*
 * XREFs of ?AddMapping@InputObjectMap@@SAJAEBU_LUID@@PEBUCompositionInputObject@@@Z @ 0x14023DA94
 * Callers:
 *     ?SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z @ 0x1401609D8 (-SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z.c)
 *     NtUserAddVisualIdentifier @ 0x1401BBF70 (NtUserAddVisualIdentifier.c)
 * Callees:
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x14001EBA0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?AddMapping@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@U_LUID@@@Z @ 0x14023DE08 (-AddMapping@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@U_LUID@@@Z.c)
 *     ?AllocateBucket@InputObjectMap@@CAPEAX_KPEAX@Z @ 0x14023DE70 (-AllocateBucket@InputObjectMap@@CAPEAX_KPEAX@Z.c)
 *     ?FindEntry@InputObjectMap@@CAPEAUInputObjectMapEntry@@AEBU_LUID@@@Z @ 0x14023DE9C (-FindEntry@InputObjectMap@@CAPEAUInputObjectMapEntry@@AEBU_LUID@@@Z.c)
 */

__int64 __fastcall InputObjectMap::AddMapping(const struct _LUID *a1, const struct CompositionInputObject *a2)
{
  const struct CompositionInputObject *v2; // r15
  __int64 UserInputMgrSessionState; // rbx
  unsigned int v5; // ebp
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rsi
  char *Bucket; // r8
  char v10; // cl
  unsigned __int64 v11; // rcx
  unsigned int v12; // edx
  unsigned int v13; // edi
  __int64 v14; // r10
  __int64 v15; // r15
  _QWORD *v16; // r9
  __int64 v17; // rdx
  void *v18; // rcx
  __int64 Pool2; // rsi
  __int64 v20; // rax
  unsigned int v21; // edi
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v26; // [rsp+70h] [rbp+18h]
  __int64 v27; // [rsp+70h] [rbp+18h]

  v2 = a2;
  UserInputMgrSessionState = W32GetUserInputMgrSessionState();
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(UserInputMgrSessionState + 8), 0);
  v5 = 0;
  if ( !InputObjectMap::FindEntry(a1) )
  {
    v6 = W32GetUserInputMgrSessionState();
    v7 = v6 + 16;
    v8 = (unsigned int)(2 * (*(_DWORD *)(v6 + 20) >> 5));
    if ( *(_DWORD *)(v6 + 16) >= (unsigned int)v8 )
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
        v12 = *(_DWORD *)(v7 + 4);
        v13 = 0;
        v14 = -1LL << (*(_BYTE *)(v7 + 4) & 0x1F);
        if ( (v12 & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v15 = *(_QWORD *)(v7 + 8);
            while ( 1 )
            {
              v16 = *(_QWORD **)(v15 + 8LL * v13);
              if ( ((unsigned __int8)v16 & 1) != 0 )
                break;
              *(_QWORD *)(v15 + 8LL * v13) = *v16;
              v26 = v14 & v16[1];
              v17 = (37
                   * (BYTE6(v26)
                    + 37
                    * (BYTE5(v26)
                     + 37
                     * (BYTE4(v26)
                      + 37
                      * (BYTE3(v26) + 37 * (BYTE2(v26) + 37 * (BYTE1(v26) + 37 * ((unsigned __int8)v26 + 11623883)))))))
                   + HIBYTE(v26)) & (unsigned int)(v8 - 1);
              *v16 = *(_QWORD *)&Bucket[8 * v17];
              *(_QWORD *)&Bucket[8 * v17] = v16;
            }
            v12 = *(_DWORD *)(v7 + 4);
            ++v13;
          }
          while ( v13 < v12 >> 5 );
          v2 = a2;
        }
        v18 = *(void **)(v7 + 8);
        *(_QWORD *)(v7 + 8) = Bucket;
        *(_DWORD *)(v7 + 4) = (32 * v8) | v12 & 0x1F;
        if ( v18 )
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>(v18);
      }
      else if ( *(_DWORD *)(v7 + 4) < 0x20u )
      {
LABEL_27:
        v5 = -1073741670;
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
      v20 = W32GetUserInputMgrSessionState();
      v21 = *(_DWORD *)(v20 + 20);
      v27 = *(_QWORD *)(Pool2 + 8) & (-1LL << (v21 & 0x1F));
      v22 = *(_QWORD *)(v20 + 24);
      v23 = (37
           * (BYTE6(v27)
            + 37
            * (BYTE5(v27)
             + 37
             * (BYTE4(v27)
              + 37 * (BYTE3(v27) + 37 * (BYTE2(v27) + 37 * (BYTE1(v27) + 37 * ((unsigned __int8)v27 + 11623883)))))))
           + HIBYTE(v27)) & ((v21 >> 5) - 1);
      *(_QWORD *)Pool2 = *(_QWORD *)(v22 + 8 * v23);
      *(_QWORD *)(v22 + 8 * v23) = Pool2;
      ++*(_DWORD *)(v20 + 16);
      ObReferenceObjectByPointer(v2, 3u, ExCompositionObjectType, 0);
      InputTraceLogging::InputSink::AddMapping(v2, *a1);
      goto LABEL_29;
    }
    goto LABEL_27;
  }
  v5 = -1073741811;
LABEL_29:
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(UserInputMgrSessionState + 8), 0LL);
  return v5;
}
