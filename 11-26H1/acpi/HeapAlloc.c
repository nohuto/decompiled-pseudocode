/*
 * XREFs of HeapAlloc @ 0x1400090C0
 * Callers:
 *     AccessBaseField @ 0x140004F30 (AccessBaseField.c)
 *     ParseOpcode @ 0x140007B60 (ParseOpcode.c)
 *     AsyncEvalObject @ 0x140009DE0 (AsyncEvalObject.c)
 *     AccFieldUnit @ 0x14000ACF0 (AccFieldUnit.c)
 *     ReadField @ 0x14000CB30 (ReadField.c)
 *     WriteFieldLoop @ 0x14000DDB0 (WriteFieldLoop.c)
 *     Field @ 0x1400102A0 (Field.c)
 *     OpRegion @ 0x140010510 (OpRegion.c)
 *     ParseField @ 0x140010AC8 (ParseField.c)
 *     CreateNameSpaceObject @ 0x140010FE0 (CreateNameSpaceObject.c)
 *     CreateXField @ 0x140011840 (CreateXField.c)
 *     IncDec @ 0x140011A50 (IncDec.c)
 *     Index @ 0x1400120A0 (Index.c)
 *     ExprOp2_64 @ 0x140012500 (ExprOp2_64.c)
 *     Store @ 0x140013D20 (Store.c)
 *     WriteObject @ 0x140014190 (WriteObject.c)
 *     DupObjData @ 0x140014650 (DupObjData.c)
 *     Acquire @ 0x140014CB0 (Acquire.c)
 *     Release @ 0x140014E60 (Release.c)
 *     ConvertToBuffer @ 0x1400150F8 (ConvertToBuffer.c)
 *     Concat @ 0x140015240 (Concat.c)
 *     ToHexStr @ 0x1400155F0 (ToHexStr.c)
 *     PushPost @ 0x140015C84 (PushPost.c)
 *     MidString @ 0x140015EA0 (MidString.c)
 *     ConvertToString @ 0x140016ABC (ConvertToString.c)
 *     IndexField @ 0x140030BC0 (IndexField.c)
 *     BankField @ 0x140030DC0 (BankField.c)
 *     RawFieldAccess @ 0x140036EEC (RawFieldAccess.c)
 *     NewObjData @ 0x140037DEC (NewObjData.c)
 *     ParseString @ 0x140038A6C (ParseString.c)
 *     Buffer @ 0x1400395A0 (Buffer.c)
 *     SleepQueueRequest @ 0x14003971C (SleepQueueRequest.c)
 *     Package @ 0x14003C780 (Package.c)
 *     Method @ 0x14003E490 (Method.c)
 *     FindNSObj @ 0x14003F6A0 (FindNSObj.c)
 *     PushPreserveWriteObj @ 0x14003F97C (PushPreserveWriteObj.c)
 *     ToDecStr @ 0x140044A30 (ToDecStr.c)
 *     PushFrame @ 0x14004944C (PushFrame.c)
 *     InitMutex @ 0x14004D640 (InitMutex.c)
 *     ConcatenateResTemplate @ 0x140052780 (ConcatenateResTemplate.c)
 *     ParseFieldConnection @ 0x140054000 (ParseFieldConnection.c)
 *     Simulator_Copy_Arguments @ 0x14006C874 (Simulator_Copy_Arguments.c)
 *     LoadFieldUnitDDB @ 0x14006CF10 (LoadFieldUnitDDB.c)
 *     InitEvent @ 0x14006F924 (InitEvent.c)
 *     PowerRes @ 0x14006FAA0 (PowerRes.c)
 *     Processor @ 0x14006FC20 (Processor.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1400DC53C (Simulator_NotifyTablesAreLoaded.c)
 *     AMLIInitialize @ 0x1400DD5C8 (AMLIInitialize.c)
 * Callees:
 *     NewLocalHeap @ 0x140002E5C (NewLocalHeap.c)
 *     NewGlobalHeap @ 0x14006F800 (NewGlobalHeap.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 *__fastcall HeapAlloc(_QWORD *a1, int a2, unsigned int a3)
{
  __int64 *v5; // rbx
  _QWORD *v6; // rbp
  int v7; // edi
  unsigned int v8; // edi
  KIRQL v9; // al
  __int64 v10; // r9
  __int64 v11; // rdx
  _QWORD *v12; // r10
  _QWORD *v13; // rax
  __int64 **v14; // r8
  __int64 *v15; // rbx
  __int64 *result; // rax
  int v17; // eax
  __int64 v18; // r9
  __int64 **v19; // rcx
  __int64 **v20; // r10
  unsigned int v21; // eax
  __int64 *i; // rax
  __int64 **v23; // rcx
  __int64 *v24; // r11
  _QWORD *v25; // rdi
  __int64 v26; // rcx
  __int64 **v27; // rax
  __int64 **v28; // rdi
  _QWORD *v29; // r10
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rcx
  __int64 *v36; // rcx
  __int64 **v37; // rax
  _QWORD *v38; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  if ( a3 + 16 < a3 )
    goto LABEL_14;
  if ( a3 + 16 < 0x20 )
  {
    v7 = 39;
    goto LABEL_4;
  }
  v7 = a3 + 23;
  if ( a3 + 23 >= a3 + 16 )
  {
LABEL_4:
    v8 = v7 & 0xFFFFFFF8;
    v9 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v11 = (__int64)a1;
    byte_14008EB20 = v9;
    v38 = a1;
    v12 = a1;
    v13 = a1;
    v14 = (__int64 **)a1;
    while ( 2 )
    {
      if ( !v13 )
        goto LABEL_21;
      v15 = v14[5];
      v14 += 5;
      v6 = v12;
      while ( 1 )
      {
        v5 = v15 - 2;
        if ( v14 == (__int64 **)(v5 + 2) )
        {
          v5 = 0LL;
          goto LABEL_9;
        }
        if ( v8 <= *((_DWORD *)v5 + 1) )
          break;
        v15 = (__int64 *)v5[2];
      }
      if ( v5 )
      {
        v18 = v5[2];
        if ( *(__int64 **)(v18 + 8) != v5 + 2 )
          goto LABEL_38;
        v19 = (_QWORD *)v5[3];
        if ( (__int64 *)*v19 != v5 + 2 )
          goto LABEL_38;
        *v19 = v18;
        *(_QWORD *)(v18 + 8) = v19;
        v10 = v8;
        if ( *((unsigned int *)v5 + 1) >= (unsigned __int64)v8 + 32 )
        {
          v20 = (__int64 **)((char *)v5 + v8);
          *(_DWORD *)v20 = 0;
          v21 = *((_DWORD *)v5 + 1) - v8;
          v20[1] = (__int64 *)v11;
          *((_DWORD *)v20 + 1) = v21;
          *((_DWORD *)v5 + 1) = v8;
          for ( i = *v14; i != (__int64 *)v14; i = (__int64 *)*i )
          {
            if ( v20 + 2 < (__int64 **)i )
              break;
          }
          v23 = (__int64 **)i[1];
          v24 = (__int64 *)(v20 + 2);
          if ( *v23 != i )
            goto LABEL_38;
          v20[3] = (__int64 *)v23;
          *v24 = (__int64)i;
          *v23 = v24;
          i[1] = (__int64)v24;
          v25 = (_QWORD *)*v24;
          v26 = *v24 - 16;
          if ( (__int64 **)*v24 != v14 )
          {
            v32 = *((unsigned int *)v20 + 1);
            if ( (__int64 **)v26 == (__int64 **)((char *)v20 + v32) )
            {
              *((_DWORD *)v20 + 1) = v32 + *(_DWORD *)(v26 + 4);
              v33 = *v25;
              if ( *(_QWORD **)(*v25 + 8LL) == v25 )
              {
                v34 = (_QWORD *)v25[1];
                if ( (_QWORD *)*v34 == v25 )
                {
                  *v34 = v33;
                  *(_QWORD *)(v33 + 8) = v34;
                  goto LABEL_33;
                }
              }
LABEL_38:
              __fastfail(3u);
            }
          }
LABEL_33:
          v27 = (__int64 **)v20[3];
          v28 = v27 - 2;
          if ( v27 != v14 )
          {
            v35 = *((unsigned int *)v28 + 1);
            if ( v20 == (__int64 **)((char *)v28 + v35) )
            {
              *((_DWORD *)v28 + 1) = *((_DWORD *)v20 + 1) + v35;
              v36 = (__int64 *)*v24;
              if ( *(__int64 **)(*v24 + 8) != v24 )
                goto LABEL_38;
              v37 = (__int64 **)v20[3];
              if ( *v37 != v24 )
                goto LABEL_38;
              *v37 = v36;
              v20 = v28;
              v36[1] = (__int64)v37;
            }
          }
          if ( *(_QWORD *)(v11 + 32) <= (unsigned __int64)v20 + *((unsigned int *)v20 + 1) )
          {
            *(_QWORD *)(v11 + 32) = v20;
            v29 = v20 + 2;
            v30 = *v29;
            if ( *(_QWORD **)(*v29 + 8LL) != v29 )
              goto LABEL_38;
            v31 = (_QWORD *)v29[1];
            if ( (_QWORD *)*v31 != v29 )
              goto LABEL_38;
            *v31 = v30;
            *(_QWORD *)(v30 + 8) = v31;
          }
        }
        goto LABEL_12;
      }
LABEL_9:
      if ( v8 > *(_DWORD *)(v11 + 8) - *(_DWORD *)(v11 + 32) )
      {
        v13 = *(_QWORD **)(v11 + 24);
        v11 = (__int64)v13;
        v38 = v13;
        v12 = v13;
        v14 = (__int64 **)v13;
        continue;
      }
      break;
    }
    v5 = *(__int64 **)(v11 + 32);
    v10 = v8;
    *(_QWORD *)(v11 + 32) = (char *)v5 + v8;
    *((_DWORD *)v5 + 1) = v8;
    if ( !v5 )
    {
LABEL_21:
      if ( a1 == (_QWORD *)gpheapGlobal )
      {
        if ( v8 + 56 > (unsigned int)gdwGlobalHeapBlkSize )
        {
          v11 = v8 % (unsigned int)gdwGlobalHeapBlkSize;
          if ( (unsigned int)gdwGlobalHeapBlkSize * (v8 / (unsigned int)gdwGlobalHeapBlkSize + 1) > 0x800000 )
          {
            if ( v8 > 0x800000 )
              goto LABEL_13;
            LODWORD(gdwGlobalHeapBlkSize) = v8;
          }
          else
          {
            LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (v8 / (unsigned int)gdwGlobalHeapBlkSize + 1);
          }
        }
        v17 = NewGlobalHeap(&v38, v11, v14, v10);
      }
      else
      {
        v17 = NewLocalHeap(&v38);
      }
      if ( v17 )
        goto LABEL_13;
      v11 = (__int64)v38;
      v10 = v8;
      v38[2] = a1;
      v6[3] = v11;
      v5 = *(__int64 **)(v11 + 32);
      *(_QWORD *)(v11 + 32) = (char *)v5 + v8;
      *((_DWORD *)v5 + 1) = v8;
      if ( !v5 )
        goto LABEL_13;
    }
LABEL_12:
    v5[1] = v11;
    *(_DWORD *)v5 = a2;
    memset(v5 + 2, 0, v10 - 16);
LABEL_13:
    KeReleaseSpinLock(&gmutHeap, byte_14008EB20);
  }
LABEL_14:
  result = (__int64)(v5 + 2);
  if ( !v5 )
    return 0LL;
  return (__int64 *)result;
}
