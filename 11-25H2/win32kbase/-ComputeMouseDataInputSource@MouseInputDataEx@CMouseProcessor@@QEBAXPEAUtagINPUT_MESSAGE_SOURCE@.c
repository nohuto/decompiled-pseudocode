/*
 * XREFs of ?ComputeMouseDataInputSource@MouseInputDataEx@CMouseProcessor@@QEBAXPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14005E4A4
 * Callers:
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUMouseInputProcessingState@@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@PEBUtagPOINT@@@Z @ 0x140191E90 (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUMouseInputProcessingState@@PEB.c)
 * Callees:
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x140060388 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 */

void __fastcall CMouseProcessor::MouseInputDataEx::ComputeMouseDataInputSource(
        CMouseProcessor::MouseInputDataEx *this,
        struct tagINPUT_MESSAGE_SOURCE *a2)
{
  __int16 v4; // ax

  if ( *((_DWORD *)this + 22) == 1 || *((_DWORD *)this + 22) == 2 )
  {
    *(_DWORD *)a2 = 2;
    goto LABEL_13;
  }
  if ( (unsigned int)(*((_DWORD *)this + 22) - 3) < 2 )
  {
    *(_DWORD *)a2 = 0;
LABEL_13:
    *((_DWORD *)a2 + 1) = 4;
    return;
  }
  v4 = *((_WORD *)this + 1);
  if ( (v4 & 0x10) != 0 )
  {
    *(_DWORD *)a2 = 4;
  }
  else if ( (v4 & 0x40) != 0 )
  {
    *(_DWORD *)a2 = 8;
  }
  else if ( (v4 & 0x80u) != 0 )
  {
    *(_DWORD *)a2 = 18;
  }
  else
  {
    *(_DWORD *)a2 = (v4 & 0x200 | 0x20u) >> 4;
  }
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(this, 64LL) )
    *((_DWORD *)a2 + 1) = 1;
  else
    *((_DWORD *)a2 + 1) = (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(this, 16LL) != 0
                        ? 2
                        : 0;
}
