/*
 * XREFs of ndisLwmCreateIrpHandler @ 0x14000A790
 * Callers:
 *     ndisDriverDispatch @ 0x14000AF80 (ndisDriverDispatch.c)
 * Callees:
 *     IsFileObjectForNetworkInterface @ 0x14000A960 (IsFileObjectForNetworkInterface.c)
 *     ?ndisCheckAccess@@YAEPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAX@Z @ 0x14000AAD0 (-ndisCheckAccess@@YAEPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAX@Z.c)
 *     ??$?0$00X@?$unique_ptr@VInterfaceProfileKnobCollection@@U?$KFreePool@VInterfaceProfileKnobCollection@@@@@wistd@@QEAA@PEAVInterfaceProfileKnobCollection@@@Z @ 0x14000AC20 (--$-0$00X@-$unique_ptr@VInterfaceProfileKnobCollection@@U-$KFreePool@VInterfaceProfileKnobCollec.c)
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     ??$?0$00X@?$unique_ptr@_WU?$KFreePool@_W@@@wistd@@QEAA@$$T@Z @ 0x14008E040 (--$-0$00X@-$unique_ptr@_WU-$KFreePool@_W@@@wistd@@QEAA@$$T@Z.c)
 */

__int64 __fastcall ndisLwmCreateIrpHandler(struct _IRP *a1, struct _IO_STACK_LOCATION *a2)
{
  int v4; // edx
  __int64 Pool2; // rax
  int v6; // edx
  GUID *v7; // rbx
  int v8; // edx
  unsigned int v9; // esi
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-18h] BYREF
  GUID *Guid; // [rsp+60h] [rbp+18h] BYREF

  GuidString = 0LL;
  if ( (unsigned __int8)IsFileObjectForNetworkInterface(a2, &GuidString) )
  {
    Pool2 = ExAllocatePool2(64LL, 20LL, 1668236366LL);
    if ( Pool2 )
    {
      *(_WORD *)(Pool2 + 17) = 0;
      *(_BYTE *)(Pool2 + 19) = 0;
      *(_OWORD *)Pool2 = 0LL;
      *(_BYTE *)(Pool2 + 16) = 0;
      wistd::unique_ptr<InterfaceProfileKnobCollection,KFreePool<InterfaceProfileKnobCollection>>::unique_ptr<InterfaceProfileKnobCollection,KFreePool<InterfaceProfileKnobCollection>>(
        &Guid,
        Pool2);
    }
    else
    {
      wistd::unique_ptr<wchar_t,KFreePool<wchar_t>>::unique_ptr<wchar_t,KFreePool<wchar_t>>(&Guid);
    }
    v7 = Guid;
    if ( Guid )
    {
      LOBYTE(v7[1].Data1) = ndisCheckAccess(a1, a2, ndisSecurityDescriptor) != 0;
      v9 = RtlGUIDFromString(&GuidString, v7);
      if ( v9 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v8) = 2;
          WPP_RECORDER_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v8,
            11,
            16,
            (struct _GUID *)&WPP_256fc262f79a3bb49efbb755fab9107e_Traceguids,
            v9);
        }
        ExFreePoolWithTag(v7, 0);
        return v9;
      }
      else
      {
        a2->FileObject->FsContext = v7;
        return 0LL;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v6,
          11,
          15,
          (struct _GUID *)&WPP_256fc262f79a3bb49efbb755fab9107e_Traceguids);
      }
      return 3221225626LL;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v4,
        11,
        14,
        (struct _GUID *)&WPP_256fc262f79a3bb49efbb755fab9107e_Traceguids);
    }
    return 3221225523LL;
  }
}
