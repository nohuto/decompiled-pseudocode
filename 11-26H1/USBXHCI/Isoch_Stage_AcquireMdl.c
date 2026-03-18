/*
 * XREFs of Isoch_Stage_AcquireMdl @ 0x140012A00
 * Callers:
 *     Isoch_PrepareStage @ 0x140011770 (Isoch_PrepareStage.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqq @ 0x140021AF0 (WPP_RECORDER_SF_DDqq.c)
 */

__int64 __fastcall Isoch_Stage_AcquireMdl(__int64 *a1)
{
  __int64 v1; // rbx
  struct _MDL *v3; // rdi
  unsigned int v4; // edx
  __int64 v5; // rbp
  unsigned int i; // eax
  ULONG v8; // r14d
  char *v9; // r15
  struct _MDL *Mdl; // rax
  int v11; // r8d
  int v12; // edx

  v1 = *a1;
  v3 = *(struct _MDL **)(*a1 + 72);
  v4 = *(_DWORD *)(*a1 + 88) + *(_DWORD *)(*a1 + 92);
  v5 = *(_QWORD *)(*a1 + 56);
  for ( i = v3->ByteCount; v4 >= i; i = v3->ByteCount )
  {
    v3 = v3->Next;
    v4 -= i;
  }
  if ( v4 )
  {
    v8 = v3->ByteCount - v4;
    v9 = (char *)v3->StartVa + v3->ByteOffset + v4;
    Mdl = IoAllocateMdl(v9, v8, 0, 0, 0LL);
    a1[8] = (__int64)Mdl;
    if ( Mdl )
    {
      *((_BYTE *)a1 + 56) = 1;
      IoBuildPartialMdl(v3, Mdl, v9, v8);
      *(_QWORD *)a1[8] = v3->Next;
      return 0LL;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 143LL);
        LOBYTE(v12) = 2;
        WPP_RECORDER_SF_DDqq(
          *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
          v12,
          v11,
          45,
          (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
          *(_BYTE *)(*(_QWORD *)(v5 + 48) + 143LL),
          *(_DWORD *)(*(_QWORD *)(v5 + 56) + 152LL),
          *(_QWORD *)(v1 + 24),
          (char)a1);
      }
      return 3221225626LL;
    }
  }
  else
  {
    a1[8] = (__int64)v3;
    return 0LL;
  }
}
