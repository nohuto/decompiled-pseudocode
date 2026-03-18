/*
 * XREFs of VidMmReportMultiAlloc @ 0x140115B30
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0ppppppppppppq_EtwWriteTransfer @ 0x14003DCC4 (McTemplateK0ppppppppppppq_EtwWriteTransfer.c)
 */

int __fastcall VidMmReportMultiAlloc(__int64 a1, __int64 a2)
{
  _UNKNOWN **v2; // rax
  __int64 **v3; // r11
  __int64 v4; // r10
  __int64 *v5; // rdx
  unsigned int v6; // r14d
  unsigned int v7; // r9d
  void *v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rdi
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h] BYREF

  v2 = &retaddr;
  v3 = *(__int64 ***)(a2 + 24);
  v4 = 0LL;
  if ( v3 )
  {
    v5 = v3[2];
    v6 = 0;
    v7 = 0;
    v8 = 0LL;
    if ( v5 )
    {
      v2 = (_UNKNOWN **)v5[5];
      v6 = *((_DWORD *)v5 + 4);
      if ( v2 )
      {
        v7 = *((_DWORD *)v2 + 4);
        v8 = v2[6];
      }
    }
    v9 = **v3;
    if ( (byte_14008A201 & 0x10) != 0 )
    {
      if ( (**(_DWORD **)(v9 + 368) & 8) != 0 )
        v10 = *(_QWORD *)(v9 + 208);
      else
        v10 = (*v3)[2];
      v11 = v5[5];
      if ( v11 )
        v4 = *(_QWORD *)(v11 + 56);
      LODWORD(v2) = McTemplateK0ppppppppppppq_EtwWriteTransfer(
                      v7,
                      &EventReportDeviceAllocation,
                      *(_QWORD *)(a1 + 16),
                      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 64LL) + 80LL),
                      a1,
                      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL),
                      v3,
                      v9,
                      v11,
                      v4,
                      v6,
                      v7,
                      v8,
                      v10,
                      *(_QWORD *)(v9 + 224));
    }
  }
  return (int)v2;
}
