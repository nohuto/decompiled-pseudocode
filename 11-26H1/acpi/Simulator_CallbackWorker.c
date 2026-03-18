/*
 * XREFs of Simulator_CallbackWorker @ 0x14006C690
 * Callers:
 *     <none>
 * Callees:
 *     DereferenceObjectEx @ 0x140004EF0 (DereferenceObjectEx.c)
 *     FreeDataBuffs @ 0x140007570 (FreeDataBuffs.c)
 *     FreeObjData @ 0x14000C970 (FreeObjData.c)
 *     AMLIEvalNameSpaceObject @ 0x14000EC04 (AMLIEvalNameSpaceObject.c)
 *     DupObjData @ 0x140014650 (DupObjData.c)
 *     AMLIResumeInterpreter @ 0x140030690 (AMLIResumeInterpreter.c)
 *     GetNameSpaceObject @ 0x140030FE0 (GetNameSpaceObject.c)
 *     Simulator_NotifyNode @ 0x14006CAC4 (Simulator_NotifyNode.c)
 *     Simulator_PauseInterpreter @ 0x14006CB5C (Simulator_PauseInterpreter.c)
 *     Simulator_RemoveNode @ 0x14006CCB0 (Simulator_RemoveNode.c)
 */

void __fastcall Simulator_CallbackWorker(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdi
  _BYTE *v11; // rcx
  int NameSpaceObject; // eax
  __int64 v13; // rdi
  int v14; // esi
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  KIRQL v18; // al
  _QWORD *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rcx
  __int64 v23; // [rsp+38h] [rbp+10h] BYREF

  if ( !Argument1 || *(_DWORD *)Argument1 != 2 )
    return;
  v4 = *((_DWORD *)Argument1 + 1);
  if ( v4 > 12 )
  {
    v15 = v4 - 13;
    if ( !v15 )
    {
      FreeDataBuffs(*((_QWORD *)Argument1 + 3), *((_DWORD *)Argument1 + 4));
      goto LABEL_38;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      *((_QWORD *)Argument1 + 3) = gpnsNameSpaceRoot;
      *((_DWORD *)Argument1 + 18) = 0;
      return;
    }
    v17 = v16 - 1;
    if ( v17 )
    {
      if ( v17 != 1 )
        goto LABEL_26;
      v18 = ExAcquireSpinLockShared(&ACPINamespaceLock);
      v19 = (_QWORD *)*((_QWORD *)Argument1 + 2);
      if ( !v19 )
      {
LABEL_32:
        ExReleaseSpinLockShared(&ACPINamespaceLock, v18);
        goto LABEL_38;
      }
      v20 = v19[2];
      if ( v20 && *v19 != v20 + 24 )
      {
        *((_QWORD *)Argument1 + 3) = *v19;
        goto LABEL_32;
      }
    }
    else
    {
      v18 = ExAcquireSpinLockShared(&ACPINamespaceLock);
      v21 = *((_QWORD *)Argument1 + 2);
      if ( !v21 )
        goto LABEL_32;
      v22 = (_QWORD *)(v21 + 24);
      if ( (_QWORD *)*v22 != v22 )
      {
        *((_QWORD *)Argument1 + 3) = *v22;
        goto LABEL_32;
      }
    }
    *((_QWORD *)Argument1 + 3) = 0LL;
    goto LABEL_32;
  }
  if ( v4 != 12 )
  {
    v5 = v4 - 7;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = (unsigned int)(v7 - 1);
          if ( (_DWORD)v8 )
          {
            if ( (_DWORD)v8 == 1 )
            {
              AMLIResumeInterpreter();
LABEL_38:
              *((_DWORD *)Argument1 + 18) = 0;
              return;
            }
LABEL_26:
            *((_DWORD *)Argument1 + 18) = -1073741811;
            return;
          }
          v9 = Simulator_PauseInterpreter(v8, Argument1, Argument2);
        }
        else
        {
          v9 = Simulator_NotifyNode(Argument1, Argument1, Argument2);
        }
      }
      else
      {
        v10 = *((_QWORD *)Argument1 + 2);
        if ( v10 )
        {
          FreeObjData(*((_QWORD *)Argument1 + 2));
          v9 = DupObjData((_QWORD *)gpheapGlobal, v10, *((_QWORD *)Argument1 + 3));
        }
        else
        {
          v9 = -1073741811;
        }
      }
    }
    else
    {
      v9 = Simulator_RemoveNode(Argument1, Argument1, Argument2);
    }
    *((_DWORD *)Argument1 + 18) = v9;
    return;
  }
  v11 = (_BYTE *)*((_QWORD *)Argument1 + 2);
  v23 = 0LL;
  NameSpaceObject = GetNameSpaceObject(v11, 0LL, &v23, 0);
  v13 = v23;
  v14 = NameSpaceObject;
  if ( NameSpaceObject >= 0 && v23 )
    v14 = AMLIEvalNameSpaceObject(
            (__int64 *)(v23 + 120),
            *((_QWORD *)Argument1 + 5),
            *((_DWORD *)Argument1 + 6),
            *((_QWORD *)Argument1 + 4));
  DereferenceObjectEx(v13);
  *((_DWORD *)Argument1 + 18) = v14;
}
